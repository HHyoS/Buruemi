const express = require("express");
const http = require("http");
const socketIo = require("socket.io");
const path = require("path");
const mysql = require("mysql2");

const app = express();
const server = http.createServer(app);
const io = socketIo(server);

const db = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "ssafy",
  database: "my_db",
});

// 주문 대기열
let queue = [];

app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, "public")));

// 회원가입
app.post("/signup", (req, res) => {
  const { userId, password } = req.body;
  const selectSql = `SELECT * FROM users WHERE userId = ?`;
  db.query(selectSql, [userId], (err, result) => {
    if (err) {
      console.error(err);
      return res.status(500).send("Server error");
    }
    if (result.length > 0) {
      // 이미 존재하는 userId인 경우
      return res.status(409).send("User already exists");
    } else {
      // 새로운 userId인 경우
      const insertSql = `INSERT INTO users (userId, password) VALUES (?, ?)`;
      db.query(insertSql, [userId, password], (err, result) => {
        if (err) {
          console.error(err);
          return res.status(500).send("Server error");
        }
        res.send("Signup success");
      });
    }
  });
});

// 로그인
app.post("/login", (req, res) => {
  const { userId, password } = req.body;
  const sql = `SELECT * FROM users WHERE userId = ? AND password = ?`;
  db.query(sql, [userId, password], (err, result) => {
    if (err) {
      console.error(err);
      return res.status(500).send("Server error");
    }
    if (result.length === 0) {
      return res.status(401).send("Invalid credentials");
    }
    res.send("Login success");
  });
});

io.on("connection", (socket) => {
  console.log("클라이언트가 접속했습니다.");

  // 주문 요청 처리
  socket.on("order", () => {
    queue.push(socket.id);
    console.log("order!!!");
    const waitingNumber = queue.length;
    socket.emit("waiting", waitingNumber);
    socket.broadcast.emit("update", queue);
  });

  // 주문 취소 처리
  socket.on("cancel", () => {
    const index = queue.indexOf(socket.id);
    if (index >= 0) {
      queue.splice(index, 1);
      console.log("cancel");

      // 취소한 클라이언트의 대기순번 업데이트
      socket.emit("waiting", 0);

      // 취소한 클라이언트 뒤의 대기순번 감소
      for (let i = index; i < queue.length; i++) {
        io.to(queue[i]).emit("waiting", i + 1);
      }

      socket.broadcast.emit("update", queue);
    }
  });

  // 클라이언트 접속 종료 처리
  socket.on("disconnect", () => {
    const index = queue.indexOf(socket.id);
    if (index >= 0) {
      queue.splice(index, 1);
      socket.broadcast.emit("update", queue);
    }
    console.log("클라이언트가 접속을 종료했습니다.");
  });
});

server.listen(8080, () => {
  console.log("서버가 시작되었습니다.");
});

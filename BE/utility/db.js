const mysql = require("mysql2/promise");

const pool = mysql.createPool({
	// aws ip
	host: "k8c208.p.ssafy.io",
	// mysql username
	user: "broomi",
	// mysql user password
	password: "broomi",
	// db name
	database: "user",
	waitForConnections: true,
	connectionLimit: 10,
	queueLimit: 0,
});

module.exports = { pool };

const https = require("https");
const express = require("express");
const cors = require("cors");
var morgan = require('morgan');
var logger = require('./utility/winston.js');
const credentials = require("./utility/credentials.js")
const app = express();
const PORT = 8080;

//k8c208.p.ssafy.io
app.use(cors());
app.use(express.json());
app.use(morgan('combined', {
    stream: logger.stream
})); 


app.get("/", async (req, res) => {
	logger.info(req.body);
	return res.sendFile("index.html", {
		root : "./views"
	});
});


app.post('/api/version', async(req, res) => {
	let state = false;
	let msg = "version >> error";
	console.log(req.body);

	if(req.body.version == version){
		state = true;
		msg = "okisbacon";
	}

	console.log(msg);
	logger.info(msg);

	return res.json({
		success : state, message : msg
	});
})


https.createServer(credentials, app).listen(PORT, () => console.log(`this server listening on ${PORT}`));

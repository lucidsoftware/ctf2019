const express = require('express');
const bodyParser = require('body-parser');
const path = require('path');
const {
    execSync
} = require('child_process');

const SECRET_FLAG = '4f02d6cb-22fd-4f48-bc74-8b5e00e0147e';

execSync('make challenge');

const app = express();
app.use(bodyParser.json({
    limit: '1mb'
}));

app.get('/challenge', (req, res) => {
    res.sendFile(path.join(__dirname, 'challenge.html'));
});

app.post('/challenge', (req, res) => {
    const key = req.body.key;
    try {
        execSync(path.join(__dirname, `keyvalidation-challenge ${key}`));
        res.send({
            valid: true,
            flag: SECRET_FLAG
        });
    } catch (e) {
        res.send({
            valid: false
        });
    }
});

const server = app.listen(11011);

process.on('SIGINT', function () {
    server.close(() => {
        process.exit();
    });
});
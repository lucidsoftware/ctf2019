## Questions and Answers
### There is an open port with questions worth answering.

- Connected against the port in question with an interactive client (e.g. `telnet` or `ncat`) allows you to get the riddle, and more importantly, answer it.
- Many individuals make the mistake of using `curl` or a web browser to address the port, but the protocol is not HTTP. Because of this, they are unable to answer the riddle to get the flag.

- Port: `50089`
- Riddle answer: `paper`, `cross site scripting (or xss)`, `tom sawyer`
- User will need to decode the base64 encrypted string: `echo <string> | base64 -d`
- Key: ```flag{youShouldntUseTelnet}```

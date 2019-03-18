# Solution to the Command injection challenge

## Login Page(index.php)
The login page has a standard SQL Injection vulnerability. In the input fields the string that needs to be input is the x' or '1'='1
The final query that way will be:-  SELECT id FROM users WHERE password = 'x' or '1'='1' AND username = 'x'or '1'='1';


## Welcome Page(welcome.php)
This page has a command injection vulnerability. The input field allows you to ping a server and receives the response back.
You should start with adding additional commands to check if you can execute additional commands. 
The final command should look something like this 127.0.0.1 -n 1 | cat flag.txtå
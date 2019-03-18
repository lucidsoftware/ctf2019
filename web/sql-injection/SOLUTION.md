# Solution to the SQL injection challenge

## Login Page(index.php)
The login page has a standard SQL Injection vulnerability. In the input fields the string that needs to be input is the x' or '1'='1
The final query that way will be:-  SELECT id FROM users WHERE password = 'x' or '1'='1' AND username = 'x'or '1'='1';

In order to get the flag there is a search box provided. Here union based sql query is to be used. The rule in union based sql query is that the both the queries should have the same number of columns.

NOTE: You will have to figure out which style of comments is being used. It can be either # or -- (with space at the end)
 
1. We first need to find out how many columns are present in the previous select statement. This can be done by using order by. 
   a. Start with ' order by 1-- and keep increasing the number till it fails. It fails at ' order by 4-- indicating that the select statement has 3 columns.

2. Next step is to get a list of the tables inside the database. We will construct our own query based on the information we found out. The query will be:- 
' union select 1,1,table_name from INFORMATION_SCHEMA.TABLES-- 
(You will notice that there is a table with the name 'challenge_clue', looks obvious that this is where we will find our flag)

3. Similarly construct a query for getting the contents out of the challenge_clue table. The query will be:-
' union select * from challenge_clue-- 

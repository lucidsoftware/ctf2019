#!/bin/sh

# Bash script to setup sql-injection challenge

# 1. Install apache server
apt-get install apache2 -y

# 2. Start apache service
service apache2 start

# 3. Install mysql-server
apt-get install mysql-server -y

# 4. Start mysql service
service mysql start

# 5. Create database security_challenge and import security_challenge.sql file
mysql -e "CREATE DATABASE security_challenge;"
mysql security_challenge < db/security_challenge.sql

# 6. Create a sec_user  
mysql -e "CREATE USER 'sec_user'@'localhost' IDENTIFIED BY 'DgWWTcq!SfjP49Xr'";
mysql -e "GRANT ALL PRIVILEGES ON security_challenge.* TO 'sec_user'@'localhost'";


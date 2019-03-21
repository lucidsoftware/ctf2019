#Dockerfile for the sql-injection Challenge
FROM nimmis/apache-php7

MAINTAINER Shaunak Shah sshah@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    mkdir -p /var/www/html/myapp && \
    apt-get clean
 
RUN rm -rf /var/www/html/index.html

WORKDIR /var/www/html/myapp

COPY . .

RUN bash install-setup.sh 

EXPOSE 80

ENTRYPOINT service mysql start && service apache2 start && /bin/bash

#Dockerfile for the sql-injection Challenge
FROM nimmis/apache-php7

MAINTAINER Shaunak Shah sshah@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get remove --purge mysql* && \
    apt-get install mysql-server apache2 -y && \
    mkdir -p /var/www/html/myapp && \
    apt-get clean && \
    rm /var/www/html/index.html

WORKDIR /var/www/html/myapp

COPY . .

RUN bash install-setup.sh 

EXPOSE 80

CMD /var/www/html/myapp/run.sh


#Dockerfile for the sql-injection Challenge
FROM nimmis/apache-php7

MAINTAINER Shaunak Shah sshah@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y iputils-ping && \
    mkdir -p /var/www/html/myapp && \
    apt-get clean && \
    rm /var/www/html/index.html

WORKDIR /var/www/html/myapp

COPY . .

RUN bash install-setup.sh  && \
    rm Dockerfile SOLUTION.md README.md && \
    echo 'flag:{Z9tkRkWmpt9Qr7XrR5jWRkgOU901swEZ}' > /home/flag.txt

EXPOSE 80

CMD /var/www/html/myapp/run.sh


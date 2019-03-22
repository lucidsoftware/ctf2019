#Dockerfile for the StarAuth Challenge
FROM httpd:latest
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get clean

COPY challenge.html /usr/local/apache2/htdocs/

EXPOSE 80


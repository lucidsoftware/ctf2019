#Dockerfile for the StarAuth Challenge
FROM ubuntu:latest
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install build-essential openssh-server -y && \
    mkdir /app && \
    mkdir /var/run/sshd && \
    apt-get clean

WORKDIR /app

COPY . .

RUN ./setup.sh

EXPOSE 22

CMD ["/usr/sbin/sshd", "-D"]

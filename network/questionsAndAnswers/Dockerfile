#Dockerfile for the StarAuth Challenge
FROM ubuntu:latest
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install xinetd -y && \
    apt-get clean && \
    mkdir /app

WORKDIR /app

COPY . .

RUN cp fs/etc/xinetd.d/question /etc/xinetd.d/ && \
    cat fs/etc/services >> /etc/services && \
    cp fs/opt/questionAnswer.sh /opt/ && \
    chmod 755 /opt/questionAnswer.sh

EXPOSE 50089

CMD ["xinetd", "-dontfork"]

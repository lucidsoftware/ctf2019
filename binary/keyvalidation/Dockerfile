#Dockerfile for the StarAuth Challenge
FROM ubuntu:latest
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install npm build-essential -y && \
    mkdir /app && \
    apt-get clean

WORKDIR /app

COPY . .

RUN make
RUN npm install

EXPOSE 11011
CMD ["node", "/app/server.js"]

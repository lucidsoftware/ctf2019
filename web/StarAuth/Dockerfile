#Dockerfile for the StarAuth Challenge
FROM openjdk:11
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get clean

COPY . /app

EXPOSE 8080
CMD ["java", "-jar", "/app/StarAuth-1.0-SNAPSHOT.jar"]

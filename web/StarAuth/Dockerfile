#Dockerfile for the StarAuth Challenge
FROM openjdk:11
MAINTAINER Nathan Cooper nathan@lucidchart.com 

RUN apt-get update && \
    apt-get upgrade -y && \
    mkdir /app && \
    apt-get clean

COPY target/StarAuth-1.0-SNAPSHOT.jar /app

EXPOSE 8080
CMD ["java", "-jar", "/app/StarAuth-1.0-SNAPSHOT.jar"]

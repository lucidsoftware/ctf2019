mvn package;
docker build .
docker run -p 8080:8080 <image_id>

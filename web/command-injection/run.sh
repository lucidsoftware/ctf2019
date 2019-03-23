service mysql start
service apache2 start

while true; do
  sleep 5
  echo "---Apache2 Status---"
  service apache2 status
  echo ""
  echo "---Mysql---"
  service mysql status
  echo ""
done

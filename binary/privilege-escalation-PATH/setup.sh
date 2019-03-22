#!/bin/bash

chmod 700 *

make
useradd -s /bin/bash -m sam

echo "Checking home..."
touch /home/sam/test
ls /home/sam

chmod 444 challenge.c message.txt
cp challenge.c /home/sam/
cp message.txt /home/sam/

#echo -e "asdfasdf\nasdfasdf" | passwd sam
chmod 400 cookooEgg.rsa.pub
mkdir /home/sam/.ssh
cat cookooEgg.rsa.pub > /home/sam/.ssh/authorized_keys
chown -R sam:sam /home/sam/.ssh
chmod 775 /home/sam/.ssh/authorized_keys


chmod 555 challenge
chmod +x challenge
cp challenge /home/sam/
chmod u+s /home/sam/challenge

chmod 400 getflag
cp getflag /home/sam


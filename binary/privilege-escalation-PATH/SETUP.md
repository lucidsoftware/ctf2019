To setup this challenge it is critical that the files have the right permissions. 

1. The owner of the following files should be someone other than the user who the students will use to ssh into the machine.(Example can be root since we do not want them to be able to read the the getflag file) 
	a. challenge.c (User should be able to read this file)
	
	b. challenge (Permissions chmod u+s on this file)
	
	c. getflag (Permissions 700 on this file)

2. To verify :-
Log into the machine as the user that the students are going to use. You should be able to read the challenge.c file and should be able to execute challenge executable file. However, when you are trying to cat on the getflag you should get the following error "cat: getflag: Permission denied"

Note: Verify with Shaunak that the permissions are correct and the ctf has been setup in the right way.

docker build -t priv_escalation .
docker run --rm --name priv_escalation -p 2222:22 priv_escalation

ssh -i cookooEgg.rsa sam@13.56.161.35 -p 2222


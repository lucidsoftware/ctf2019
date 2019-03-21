To setup this challenge it is critical that the files have the right permissions. 

1. The owner of the following files should be someone other than the user who the students will use to ssh into the machine. 
	a. challenge.c
	
	b. challenge - Permissions chmod u+s on this file
	
	c. getflag - Permissions 700 on this file

2. To verify :-
Log into the machine as the user that the students are going to use. You should be able to read the challenge.c file and should be able to execute challenge executable file. However, when you are trying to cat on the getflag you should get the following error "cat: getflag: Permission denied"

Note: Verify with Shaunak that the permissions are correct and the ctf has been setup in the right way.

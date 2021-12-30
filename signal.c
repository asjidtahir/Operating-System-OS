#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include <sys/types.h>
int main(){
int pid;
pid = fork();
if(pid == 1)
{
printf("Parent of = %d\n", pid);
printf("I am the Parent with PPID = %d\n",getppid());
}
else if(pid == -1)
{
printf("Error!!! \n");
}
else
{
printf("Child PID = %d\n", pid);
printf("I am the Child with PID = %d\n", getpid());
kill(pid,SIGTERM); 
sleep(120);
}
return 0;
}



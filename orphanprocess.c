#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
int i,pid;
pid=fork();

// CHILD PROCESS


if(pid==0){

printf(" ******** CHILD PROCESS ******** \n");
printf(" ******** PARENT IS *****%d:\n ",getppid());
printf("I AM CHILD WITH PID %d:\n",getpid());
printf("Sleep for 2 sec ******** \n");
sleep(2);
printf("New parent with pID %d: \n",getppid());
}


//PARENT PROCESS

else{

printf(" ******** PARENT PROCESS ** \n");
printf(" *** PARENT IS **** %d: \n",pid);
printf("I AM PARENT WITH PID %d:\n",getpid());
printf("\n");
exit(0);
}
return 0;
}




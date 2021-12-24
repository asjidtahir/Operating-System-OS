#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(){
    int pid; 
    
    pid = fork(); 
 
    if(pid == 0){   
        printf("Child is running...\n");
        execlp("/bin/ls", "ls", NULL);
        exit(0);
    }else if(pid > 0){
        wait(NULL);
        printf("Child complete\n");
    }
    

    return 0;
}

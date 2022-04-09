#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    int pid = fork();
    
    if ( pid == 0)
    {

        printf(" Child process \n");    
    }
    else
    {
        printf("Parent Process  \n");
        pid =fork();
        if(pid > 0)
        {
            printf("Parent Process  \n");

        }
        else
        {
            printf(" Child process \n"); 

        }
    }
    return 0;
}
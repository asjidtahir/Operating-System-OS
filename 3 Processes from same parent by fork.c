#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    if(pid==0)
    {
        printf(" Child process \n");    
    }
    else
    {
        printf(" Parent process \n");   
        pid=fork();
        if(pid==0)
        {
        printf(" Child process \n");   
        }
        else
        {
            printf(" Parent process \n");  
            printf("P1 is the child of P \n"); 
            pid=fork();
            if(pid==0)
            {
                printf(" Child process \n");   

            }
            else
            {
                printf(" Parent process \n"); 
                printf("P2 is the child of P1 \n"); 
            }
            
        } 
    }
    return 0;
}

   
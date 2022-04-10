
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() 
{ 
    int Number = 10; 
    int a[] = { 3, 8, 4, 10, 80 }; 
    int size = 5; 
    int flag; 
    int i; 
    int pid;
    pid = fork();  
    if (pid > 0)  //For parent process 
    { 
        printf(" Parent process \n"); 
        for (int i = 0; i < size; i++) 
        { 
            if (a[i] != Number) 
            { 
                flag = 0; 
            } 
            else 
            { 
                flag = 1; 
            } 
        } 
        if (flag == 1) 
        { 
  
            printf("Number not found \n");
        } 
        else 
        { 
            printf("Number found \n");
  
        } 
    } 
    else //pid=0 ; For child process
    { 
        printf(" Child process \n");  
        printf("Number to be search is :%d ,Number");        
    } 
    return 0; 
} 
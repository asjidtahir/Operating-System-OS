#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
 
int main()
{
    int pid;
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int odd = 0, even = 0, i;
    pid= fork(); //Create two processes one for parent and other for child

    if (pid = 0)  //Child Process
    {
        for (int i = 0; i < 10; i++) 
        {
            if (a[i] % 2 != 0)
                Odd = Odd + a[i];
           
        }
        printf ("Child Process \n");
        printf ("Even Number sum is :%d",even ) ;
    }
    //Parent Process
 
    else {
        for (int i = 0; i < 10; i++) 
        {
             if (a[i] % 2 == 0)
                even = even + a[i];
        }
         printf ("Parent Process \n");
        printf ("ODD Number sum is :%d",odd ) ;
    }
}
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    int pid = fork();
    
    if ( pid == 0){
        fork();
        fork();
        printf("Hello \n");
    }else{
        fork();
        printf("Hello \n");
    }

    return 0;
}

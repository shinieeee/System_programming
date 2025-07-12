#include <stdio.h>
#include <unistd.h>

int main(){
int id= fork();
if(id==0)
{printf("%d",getpid());
printf("child process");}
else{
printf("%d",getppid());
printf("parent process");}

}

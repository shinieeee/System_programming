#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
int fd[2];
pipe(fd);
int id=fork();
if(id==0){
 close(fd[0]);
 int x;
 printf("Enter the val to be added\n");
 scanf("%d",&x);
 write(fd[1],&x,sizeof(int));
 close(fd[1]);
}
else{
 close(fd[1]);
 int y;
 read(fd[0],&y,sizeof(int));
 printf("value: ");
 printf("%d",y);
 close(fd[0]);
}
}

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void* routine(){
printf("test from threads");
}

int main(){
pthread_t t1;
pthread_create(&t1,NULL,&routine ,NULL);
pthread_join(t1,NULL);
return 0;
}

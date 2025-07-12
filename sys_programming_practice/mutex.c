#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int counter=0;
pthread_mutex_t mutex;
void* routine(){
for(int i=0;i<3000000;i++){
pthread_mutex_lock(&mutex);
counter++;
pthread_mutex_unlock(&mutex);
}
return NULL;
}
int main(){
pthread_t t1;
pthread_t t2;
pthread_mutex_init(&mutex,NULL);
pthread_create(&t1,NULL,&routine,NULL);
pthread_create(&t2,NULL,&routine ,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);
printf("The counter value=%d",counter);
pthread_mutex_destroy(&mutex);
return 0;
}

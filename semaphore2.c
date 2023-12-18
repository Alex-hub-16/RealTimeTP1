#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>

sem_t mutex; 
  
void* thread1(void* arg) 
{ 
    //wait 
    sem_wait(&mutex); 
    printf("Hello World 1 ! \n"); 
  
    //critical section 
    sleep(4); 
      
    //signal 
    printf("Bye 1 ! \n"); 
    sem_post(&mutex); 
} 

void* thread2(void* arg) 
{ 
    //wait 
    sem_wait(&mutex); 
    printf("Hello World 2 ! \n"); 
  
    //critical section 
    sleep(4); 
      
    //signal 
    printf("Bye 2 ! \n"); 
    sem_post(&mutex); 
} 

void* thread3(void* arg) 
{ 
    //wait 
    sem_wait(&mutex); 
    printf("Hello World 3 ! \n"); 
  
    //critical section 
    sleep(4); 
      
    //signal 
    printf("Bye 3 ! \n"); 
    sem_post(&mutex); 
} 
  
  
int main() 
{ 
    sem_init(&mutex, 0, 1); 
    pthread_t t1,t2,t3; 
    pthread_create(&t1,NULL,thread1,NULL); 
    sleep(2); 
    pthread_create(&t2,NULL,thread3,NULL); 
    sleep(5); 
    pthread_create(&t3,NULL,thread2,NULL); 
    pthread_join(t3,NULL); 
    pthread_join(t2,NULL); 
    pthread_join(t1,NULL); 
    sem_destroy(&mutex); 
    return 0; 
} 

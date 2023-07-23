#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>

#define BUFFER_SIZE 5

sem_t emptySem;
sem_t fullSem;
int in = 0, out = 0;

int buffer[BUFFER_SIZE];
pthread_mutex_t mutex;


void * produce(void *pno)
{

    for(int i = 0; i < 5; i++)
    {
        int item = rand();
        sem_wait(&emptySem);
        pthread_mutex_lock(&mutex);

        buffer[in] = item;
        printf("Producer %d produced item %d placed in %d position\n",*((int *)pno),  item, in);
        in = (in + 1)% BUFFER_SIZE;

        pthread_mutex_unlock(mutex);


        sem_post(&fullSem);

    }

}

void * consume(void *cno)
{

    for(int i = 0; i < 5; i++) {

       sem_wait(&fullSem);

       pthread_mutex_lock(&mutex);

       int item = buffer[out];
       printf("Consumer %d removed %d item from %d postion\n", *((int *)cno), item,out);

       out = (out + 1)% BUFFER_SIZE;
       pthread_mutex_unlock(&mutex);

       sem_post(&emptySem);

    }
}

void printStats()
{
    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("%d ",buffer[i]);
    }
    printf("\n");
}

int main()
{

    pthread_mutex_init(&mutex, NULL);

    sem_init(&emptySem, 0,BUFFER_SIZE);
    sem_init(&fullSem, 0, 0);

    int no[5] = {1,2,3,4,5};

    pthread_t producer[5];
    pthread_t consumer[5];

    for(int i = 0; i < 5; i++)
        pthread_create(&producer[i], NULL, (void *)produce, (void *)&no[i]);
    for(int i = 0; i < 5; i++)
        pthread_create(&consumer[i], NULL, (void *)consume, (void *)&no[i]);

    for(int i = 0; i < 5; i++)
        pthread_join(producer[i], NULL);
    for(int i = 0; i < 5; i++)
        pthread_join(consumer[i], NULL);

    pthread_mutex_destroy(&mutex);
    sem_destroy(&emptySem);
    sem_destroy(&fullSem);


    return 0;
}

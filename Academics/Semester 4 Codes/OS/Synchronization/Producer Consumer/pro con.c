#include<stdio.h>
#include<pthread.h>

#define BUFFER_SIZE 10

void * Producer();
void * Consumer();

int BufferIndex = 0;

int buffer[BUFFER_SIZE];

pthread_cond_t Buffer_not_full = PTHREAD_COND_INITIALIZER;
pthread_cond_t Buffer_not_empty = PTHREAD_COND_INITIALIZER;

pthread_mutex_t mutex= PTHREAD_MUTEX_INITIALIZER;


int main()
{
    pthread_t ptid, ctid;

    pthread_create(&ptid, NULL, (void *)Producer, NULL);
    pthread_create(&ctid, NULL, (void *)Consumer, NULL);

    pthread_join(ptid, NULL);
    pthread_join(ctid, NULL);

    return 0;
}


void *Producer()
{
    for(;;)
    {
        pthread_mutex_lock(&mutex);
        if(BufferIndex == BUFFER_SIZE)
        {
            pthread_cond_wait(&Buffer_not_full, &mutex);
        }

        buffer[BufferIndex] = 5;
        printf("Produced : %d\n", BufferIndex);

        pthread_mutex_unlock(&mutex);
        pthread_cond_signal(&Buffer_not_empty);

    }
}

void *Consumer()
{
    for(;;)
    {
        pthread_mutex_lock(&mutex);

        if(BufferIndex == -1)
        {
            pthread_cond_wait(&Buffer_not_empty, &mutex);
        }

        printf("Consumed : %d \n", BufferIndex--);
        pthread_mutex_unlock(&mutex);

        pthread_cond_signal(&Buffer_not_full);
    }

}

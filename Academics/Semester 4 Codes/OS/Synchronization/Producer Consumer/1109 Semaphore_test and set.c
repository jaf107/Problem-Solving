#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdatomic.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];

int VALUE;
int input[] = {1,2,3,4,5,6,7,8,9,10};
int inputIndex;

int currSize;

atomic_int flag;
atomic_int lock = 0;
atomic_int empty = 1, full = 0;

int in, out;

atomic_int testAndSet(atomic_int *value){
    atomic_int rv = *value;
    *value = 1;
    return rv;
}

struct threadInfo{
    int number;
};


void semWait(atomic_int *sem)
{
    while(*sem <= 0)
        ;

    (*sem)--;
}

void semSignal(atomic_int *sem)
{
    while(testAndSet(&flag))
        ;

    (*sem)++;
    flag = 0;
}

void initializeBuffer()
{
    for(int i = 0; i < BUFFER_SIZE; i++)
        buffer[i] = NULL;
}

void printBuffer()
{
    printf("Current status of the queue :");


    if(currSize == 0)
    {
        printf("BLANK\n");
        return;
    }

    for(int i = 0; i < BUFFER_SIZE; i++)
    {
        if(buffer[i] != -1 && buffer[i] != NULL)
            printf("%d ", buffer[i]);
    }
    printf("\n");
    return;
}

void * producer(void *arg)
{
    int num = ((struct threadInfo*)arg)->number;
    int it = 0;
    while(it++<5)
    {


        semWait(&empty);

        testAndSet(&lock);
        VALUE = input[inputIndex++];
        currSize++;
        buffer[in] = VALUE;

        in = (in+1) % BUFFER_SIZE;

        printf("\nProducer %d produced = %d\n",num, VALUE);

//        printBuffer();

      /*  printf("Current status of the queue :");


                if(currSize == 0)
                {
                    printf("BLANK\n");
                }

                for(int i = 0; i < BUFFER_SIZE; i++)
                {
                    if(buffer[i] != NULL)
                        printf("%d ", buffer[i]);
                }
                printf("\n");
*/
        semSignal(&full);
        lock = 0;

    }


}

void * consumer(void *arg)
{

    int num = ((struct threadInfo*)arg)->number;

    int it = 0;
    while(it++<5)
    {
        semWait(&full);

        testAndSet(&lock);
        int consumed = buffer[out];
        buffer[out] = NULL;
        out = (out+1) % BUFFER_SIZE;
        currSize--;

        printf("\nConsumer %d consumed = %d\n",num, consumed);
//        printBuffer();
  /*          printf("Current status of the queue :");


                if(currSize == 0)
                {
                    printf("BLANK\n");
                }

                for(int i = 0; i < BUFFER_SIZE; i++)
                {
                    if(buffer[i] != NULL)
                        printf("%d ", buffer[i]);
                }
                printf("\n");
*/

        semSignal(&empty);
        lock = 0;
    }

}

void initializeSemaphore()
{
    flag = 0;
    VALUE = 1;
    in = 0;
    out = 0;
    currSize = 0;
    initializeBuffer();
}


int main()
{
    initializeSemaphore();

    pthread_t t1, t2, t3, t4;


    struct threadInfo thrI1,thrI2,thrI3,thrI4;
    thrI1.number = 1;
    thrI2.number = 1;
    thrI3.number = 2;
    thrI4.number = 2;



    pthread_create(&t1, NULL, (void*)&producer, (void*)&thrI1);
    pthread_create(&t2, NULL, (void*)&consumer, (void*)&thrI2);
    pthread_create(&t3, NULL, (void*)&consumer, (void*)&thrI3);
    pthread_create(&t4, NULL, (void*)&producer, (void*)&thrI4);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);

}

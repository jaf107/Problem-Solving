#include<pthread.h>
#include<semaphore.h>
#include<stdio.h>

#define N 5
#define THINK 2
#define HUNGRY 1
#define EAT 0

#define LEFT (phno + N-1) % N
#define RIGHT (phno + 1) % N

int state[N];
int phil[N] = {0, 1, 2, 3, 4};

sem_t mutex;
sem_t S[N];

void test(int phno)
{
    if(state[phno] == HUNGRY && state[LEFT] != EAT && state[RIGHT] != EAT)
    {
        state[phno] = EAT;

        sleep(2);

        printf("Philosopher %d takes fork %d and %d\n",
					phno + 1, LEFT + 1, phno+ 1);

		printf("Philosopher %d is Eating\n", phno + 1);

		sem_post(&S[phno]);
    }

}

void take_fork(int phno)
{
    sem_wait(&mutex);
    state[phno] = HUNGRY;

    printf("Philosopher %d is Hungry.\n", phno+1);

    test(phno);

    sem_post(&mutex);

    sem_wait(&S[phno]);

    sleep(1);
}

void put_fork(int phno)
{
    sem_wait(&mutex);

    state[phno] = THINK;
    printf("Philosopher %d putting fork %d and %d down\n",
		phno + 1, LEFT + 1, phno + 1);
	printf("Philosopher %d is thinking\n", phno+ 1);

	test(LEFT);
	test(RIGHT);

	sem_post(&mutex);

}

void * philospher(void *num)
{
    while(1){
        int* i = num;

        sleep(1);

        take_fork(*i);

        sleep(0);

        put_fork(*i);
    }
}

int main()
{
    pthread_t thread_id[N];

    sem_init(&mutex, 0, 1);

    for(int i = 0;  i < N; i++){
        sem_init(&S[i], 0, 0);

        pthread_create(&thread_id[i], NULL, philospher, &phil[i]);

		printf("Philosopher %d is thinking\n", i + 1);
    }

	for (int i = 0; i < N; i++)
		pthread_join(thread_id[i], NULL);

}

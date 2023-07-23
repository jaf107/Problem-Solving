#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_SIZE 5

int normal_queue[MAX_SIZE];
int rear = -1, front = 0, item;

int Dequeue(void)
{
    if(rear == - 1){
        printf("\n\n\tNote: Queue is Empty!\n");
        return 0;
    }

    if(front == rear){
        item = normal_queue[front];
        normal_queue[front] = 0;
        front = 0;
        rear = -1;

        return  item;
    }

    front += 1;
    if(front == MAX_SIZE){
        front = 0;
    }
    if(front == 0){
        item = normal_queue[MAX_SIZE-1];
        normal_queue[MAX_SIZE-1] = 0;
    }
    if(front != 0){
        item = normal_queue[front-1];
        normal_queue[front-1] = 0;
    }

    return  item;
}

void Enqueue(int data)
{
    getch();
//printf("%d,%d   ", front, rear);
    if((rear == MAX_SIZE - 1 && front == 0) || ((front - 1 == rear) && (rear != -1))){//printf("%d,%d   ", front, rear);
        printf("\n\n\tNote: Queue is Full!\n");
        return;
    }

    rear += 1;
    if(rear == MAX_SIZE){
        rear = 0;
    }
    normal_queue[rear] = data;
    printf("\n\tNote: %d is Inserted in Queue\n", data);

    return;
}

void Display(void)
{
    printf("\n\tNow, Queue is ......\n\n\t|");

    for(int i=0; i<5; i++){
        if(normal_queue[i] == 0){
            printf("____");
        }

        else{
            printf("  %d  ", normal_queue[i]);
        }

        printf("|");
    }
    printf("\n");

    return;
}

int main()
{
    printf("\n\t\tQueue Size 5\n\n");
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Enequeue");
    getch();
    item = 3;
    printf("\n\n\tItem: %d\n", item);
    Enqueue(item);
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Enequeue");
    getch();
    printf("\n\n\tItems: 5, 9, 14 and 78\n");
    Enqueue(5);
    Enqueue(9);
    Enqueue(14);
    Enqueue(78);
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Enequeue");
    getch();
    item = 8;
    printf("\n\n\tItem: %d", item);
    printf("\n");
    Enqueue(item);
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    printf("\n\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    printf("\n\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    printf("\n\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Dequeue");
    getch();
    item = Dequeue();
    if(item != 0){
        printf("\n\n\t%d is Deleted from Queue", item);
    }
    getch();
    system("cls");
    Display();
    getch();
    printf("\n\tTask: Enequeue");
    getch();
    item = 6;
    printf("\n\n\tItem: %d\n", item);
    Enqueue(item);
    getch();
    system("cls");
    Display();
    printf("\n\tThank You!\n");

    return 0;
}

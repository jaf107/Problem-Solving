#include <stdio.h>
#include <conio.h>

struct Person
{
    int data;
    int priority;
    Person *next;
};

Person *head;

void create_pq(void)
{
    head = NULL;
}

Person * create_new_person(int data, int priority)
{
    Person *new_node = new Person;
    new_node->data = data;
    new_node->priority = priority;
    new_node->next = NULL;

    return new_node;
}

void insert_pq(Person *New)
{
    if(head == NULL)
    {
        New->next = NULL;
        head = New;
        return;
    }

    Person *save = head;
    Person *current;

    for(current = head; current != NULL; current = current->next)
    {
        if(current->priority < New->priority)
            save = current;
        else
            break;
    }

    if(current == save)
    {
        head = New;
        New->next = save;
        return;
    }

    New->next = current;
    save->next = New;
}

void show(void)
{
    printf("\n\nQueue....\n");
    for(Person * current = head; current != NULL; current = current->next)
    {
        printf("%d", current->data);
        printf("(%d)\t", current->priority);
    }
    printf("\n");
}

int main()
{
    int priority, value;

    while(1)
    {
        printf("Press  -1 for Value,if you do not insert into queue\n");
        printf("Value: ");
        scanf("%d", &value);

        if(value == -1)
            break;

        printf("Priority: ");
        scanf("%d", &priority);

        insert_pq(create_new_person(value, priority));
    }

    show();
}

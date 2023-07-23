#include <stdio.h>

struct Node {
    int data;
    Node *next, *prev;
};

Node *head, *tail;

void create_linked_list(void)
{
    head = NULL;
    tail = NULL;
}

Node * create_new_node(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    return new_node;
}

void insert_at_beginning(Node *new_node)
{
    if(head == NULL && tail == NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void insert_at_ending(Node *new_node)
{
    if(head == NULL && tail == NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
}

void travarse_forward(void)
{
    printf("\n\t travarse_forward:   ");
    for(Node * current = head; current != NULL; current = current->next){
        printf("%d    ", current->data);
    }
    printf("\n");
}

void travarse_backward(void)
{
    printf("\n\t travarse_backward:   ");
    for(Node * current = tail; current != NULL; current = current->prev){
        printf("%d    ", current->data);
    }
    printf("\n");
}

Node * search_node(int value)
{
    for(Node *current = head; current != NULL; current = current->next){
        if(current->data == value){
            return current;
        }
    }

    return NULL;
}

void insert_after_node(Node *previous ,Node *new_node)
{
    if(previous == NULL){
        printf("\n\nNote: Error!\n");
        return;
    }

    if(previous == tail){
        new_node->next = NULL;
        new_node->prev = previous;
        previous->next = new_node;
        tail = new_node;
    }

    else{
        new_node->next = previous->next;
        new_node->prev = previous;
        previous->next->prev = new_node;
        previous->next = new_node;
    }
}

void insert_before_node(Node *next_node ,Node *new_node)
{
    if(next_node == NULL){
        printf("\n\nNote: Error!\n");
        return;
    }

    if(next_node == head){
        new_node->prev = NULL;
        new_node->next = head;
        next_node->prev = new_node;
        head = new_node;
    }

    else{
        new_node->next = next_node;
        new_node->prev = next_node->prev;
        next_node->prev->next = new_node;
        next_node->prev = new_node;
    }
}

int delete_first_node()
{
    int item;

    if(head == NULL){
        return -1;
    }

    Node *delete_node = head;
    item = delete_node->data;
    head = head->next;
    delete delete_node;

    if(head != NULL){
        head->prev = NULL;
    }

    if(head == NULL){
        tail = NULL;
    }

    return item;
}

int delete_last_node()
{
    int item;

    if(tail == NULL){
        return -1;
    }

    Node *delete_node = tail;
    item = delete_node->data;
    tail = tail->prev;
    delete delete_node;

    if(tail != NULL){
        tail->next = NULL;
    }

    if(tail == NULL){
        head = NULL;
    }

    return item;
}

int delete_from_middle(Node * delete_node)
{
    int item;

    if(delete_node == NULL || delete_node == head || delete_node == tail){
        return -1;
    }

    item = delete_node->data;
    delete_node->prev->next = delete_node->next;
    delete_node->next->prev = delete_node->prev;
    delete delete_node;

    return item;
}

int search_by_value(int item)
{
    int position = -1, counter = 0;

    for(Node *current = head; current != NULL; current = current->next){
        counter++;

        if(current->data == item){
            return counter;
        }
    }

    return position;
}

int search_by_position(int node_position)
{
    int data = -1, position = 0;

    for(Node *current = head; current != NULL; current = current->next){
        position++;

        if(position == node_position){
            return current->data;
        }
    }

    return data;
}

int main()
{
    int i = 1;
    create_linked_list();

    printf("\n\t\tNow, Linked list is created. And it is empty.\n\n");

    while(i){
        int input, c, d, loc_value;
        printf("\n\n1. Insert\n2. Delete Node\n3. Travarse Linked list\n4. Search\n\nPress: ");
        scanf("%d", &c);

        if(c == 1){
            printf("\n\n1. At_beginning Insert\n2. At_ending Insert\n3. At_anywhere Insert\n\nPress: ");
            scanf("%d", &d);

            if(d == 1){
                printf("Insert item: ");
                scanf("%d", &input);
                insert_at_beginning(create_new_node(input));
            }

            if(d == 2){
                printf("Insert item: ");
                scanf("%d", &input);
                insert_at_ending(create_new_node(input));
            }

            if(d == 3){
                printf("Insert item: ");
                scanf("%d", &input);

                printf("\n1. Insert in after\n2. Insert in before\n\nPress: ");
                scanf("%d", &d);

                printf("Location item: ");
                scanf("%d", &loc_value);

                if(d == 1){
                    insert_after_node(search_node(loc_value), create_new_node(input));
                }

                if(d == 2){
                    insert_before_node(search_node(loc_value), create_new_node(input));
                }
            }
        }

        if(c == 2){
            printf("\n1. Delete 1st Node\n2. Delete last Node\n3. Delete from Middle node\n\nPress: ");
            scanf("%d", &d);

            if(d == 1){
                input = delete_first_node();
            }

            if(d == 2){
                input = delete_last_node();
            }

            if(d == 3){
                printf("Delete item: ");
                scanf("%d", &loc_value);
                input = delete_from_middle(search_node(loc_value));
            }

            if(input == -1){
                printf("\n\nNote: Error!\n");
            }
            else{
                printf("\n\nNote: %d is deleted\n", input);
            }
        }

        if(c == 3){
            travarse_forward();
            travarse_backward();
        }

        if(c != 3){
            printf("\n\n\t\tNow, Linked list is .....\n");
            travarse_forward();

        }

        if(c == 4){
            printf("\n1. By Node Position\n2. By Value\n\nPress: ");
            scanf("%d", &d);

            if(d == 1){
                int node_position;
                printf("Position: ");
                scanf("%d", &node_position);

                int temp = search_by_position(node_position);

                if(temp == -1){
                    printf("\n\nNote: Not Found!\n");
                }

                if(temp != -1){
                    printf("\n\nPosition: %d\nPosition Data: %d\n", node_position, temp);
                }
            }

            if(d == 2){
                int item;
                printf("Value: ");
                scanf("%d", &item);

                int temp = search_by_value(item);

                if(temp == -1){
                    printf("\n\nNote: Not Found!\n");
                }

                if(temp != -1){
                    printf("\n\nPosition: %d\nPosition Data: %d\n", temp, item);
                }
            }
        }

        printf("\n\n1. Continue\n2. Exit\n\nPress: ");
        scanf("%d", &i);
        if(i == 2){
            return 0;
        }
    }

    return 0;
}

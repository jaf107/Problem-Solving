#include <stdio.h>

struct Node
{
    int binary;
    char data;
    int priority;
    Node *left, *right, *parent, *next;
};

Node *head;

void create_pq(void)
{
    head = NULL;
}

Node * create_new_node(char data, int priority)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->binary = -1;
    new_node->priority = priority;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = NULL;
    new_node->next = NULL;

    return new_node;
}

void insert_pq(Node *New)
{
    if(head == NULL)
    {
        New->next = NULL;
        head = New;
        return;
    }

    Node *save = head;
    Node *current;

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
    for(Node * current = head; current != NULL; current = current->next)
    {
        printf("%c", current->data);
        printf("(%d)\t", current->priority);
    }
    printf("\n");
}

void create_huffman(Node *first, Node *second)
{
    int p = first->priority + second->priority;
    char v = '*';

    Node *finalNode = create_new_node(v, p);

    finalNode->left = first;
    finalNode->right = second;
    first->binary = 0;
    second->binary = 1;
    first->parent = finalNode;
    second->parent = finalNode;

    insert_pq(finalNode);

    head = head->next->next;
}

void printResult(Node *New)
{
    if(New->left == NULL && New->right == NULL && New->data != '*'){
        Node *temp = New;
        int value[100];
        int i = 0;
        printf("%c = ", New->data);
        while(temp != head){
            value[i] = temp->binary;
            temp = temp->parent;
            i++;
        }
        while(i != 0){
            i--;
            printf("%d", value[i]);
        }
        printf("\n");
    }
    if(New->left != NULL){
        printResult(New->left);
    }
    if(New->right != NULL){
        printResult(New->right);
    }
}

int main()
{
    int n = 6;
    int ara[] = {45, 13, 12, 16, 9, 5};
    char str[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    for(int i=0; i<n; i++){
        insert_pq(create_new_node(str[i], ara[i]));
    }

    for(int i=0; i<n-1; i++){
        create_huffman(head, head->next);
    }

    printResult(head);

    return 0;
}

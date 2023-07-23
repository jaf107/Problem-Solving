#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Node
{
    Node *parent;
    int data;
    Node *left, *right;

};

Node *root;

Node* createNode(int data)
{
    Node *newNode= new Node;
    newNode->data = data;
    newNode->parent = NULL;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(Node *leaf, Node *root)
{
    if(root==NULL)
    {
        root = leaf;
        return;
    }
    else
    {
        if(leaf->data < root->data)
        {
            if(root->left == NULL)
            {
                root->left = leaf;
                leaf->parent= root;
            }
            else
            {
                insert(leaf, root->left);
            }
        }
        else if(leaf->data> root->data)
        {
            if(root->right == NULL)
            {
                root->right = leaf;
                leaf->parent= root;
            }
            else
            {
                insert(leaf, root->right);
            }
        }
    }
}

void preOrder_Traversal(Node *root)
{

    if(root!=NULL)
    {
        cout<<root->data<<" ";

        preOrder_Traversal(root->left);

        preOrder_Traversal(root->right);
    }

}

void postOrder_Traversal(Node *root)
{
    if(root!=NULL)
    {
        preOrder_Traversal(root->left);

        preOrder_Traversal(root->right);

        cout<<root->data<<" ";
    }
}

void inOrder_Traversal(Node *root)
{
    if(root!=NULL)
    {
        preOrder_Traversal(root->left);
        cout<<root->data<<" ";
        preOrder_Traversal(root->right);

    }
}

Node *Search(int data, Node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(data> root->data)
    {
        Search(data, root->right);
    }
    else if(data < root->data)
    {
        Search(data, root->left);
    }
    else if(data == root->data)
    {
        return  root;
    }
}

Node *Min(Node *curr)
{
    while(curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

Node *Delete(Node *root, Node *toDelete)
{
    if(toDelete->left==NULL && toDelete->right==NULL)
    {
        if(toDelete!=root)
        {
            if(toDelete->data > toDelete->parent->data)
            {
                toDelete->parent->right = NULL;
                delete toDelete;
                toDelete = NULL;
            }
            else
            {
                toDelete->parent->left = NULL;
                delete toDelete;
                toDelete = NULL;
            }
        }
        else
            root = NULL;
    }
    else if(toDelete->left == NULL)
    {
        Node *temp = toDelete;
        if(toDelete->data > toDelete->parent->data)
        {
            toDelete->parent->right = toDelete->right;
        }
        else
        {
            toDelete->parent->left = toDelete->right;
        }
        toDelete = toDelete->right;
        delete temp;
    }
    else if(toDelete->right == NULL)
    {
        Node *temp = toDelete;
        if(toDelete->data > toDelete->parent->data)
        {
            toDelete->parent->right = toDelete->left;
        }
        else
        {
            toDelete->parent->left = toDelete->left;
        }
        toDelete = toDelete->left;
        delete temp;
    }
    else
    {
        Node *minimum = Min(toDelete->right);
        int val= minimum->data;
        Delete(root,minimum);
        toDelete->data= val;
    }
    return toDelete;
}

void menu()
{
    int chc,d,s;
    printf("1.Create Tree 2.Insert Element 3.Delete Element 4.Search Element 5.Print Tree 6.Exit\nEnter your choice: ");
    scanf("%d",&chc);
    if(chc==1)
    {
        int n;
        printf("Enter the number of nodes: ");
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            int num;
            scanf("%d",&num);
            if(root==NULL)
            {
                root = createNode(num);
            }
            insert(createNode(num),root);
        }
        menu();
    }
    else if(chc==2)
    {
        printf("\nEnter the number: ");
        int num;
        scanf("%d",&num);
        if(root==NULL)
        {
            root = createNode(num);
        }
        insert(createNode(num),root);
        menu();
    }
    else if(chc==3)
    {
        printf("\nEnter the node to delete: ");
        scanf("%d",&d);
        if(Search(d,root)!=NULL)
            Delete(root,Search(d, root));
        else
            cout<<"Number not found"<<endl;
        menu();
    }
    else if(chc==4)
    {
        printf("Enter the number to search:");
        scanf("%d",&s);
        if(Search(s,root)==NULL)
            cout<<"Number not found"<<endl;
        else
            cout<<"Number found"<<endl;
        menu();
    }
    else if(chc==5)
    {
        cout<<"Pre Oder: ";
        preOrder_Traversal(root);
        cout<<endl;
        cout<<"Post Oder: ";
        postOrder_Traversal(root);
        cout<<endl;
        cout<<"In Oder: ";
        inOrder_Traversal(root);
        cout<<endl;
        menu();
    }
    else
    {
        return;
    }
}
int main()
{
    menu();
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int key, level;
    Node *left, *right, *parent;
};


class BST{
private:
    Node *root;

public:
    BST(){
        root = NULL;
    }

    Node* getRoot() {return root;}

private:
    void insertRoot(int val){
        root=(Node*)malloc(sizeof(Node));
        root->key = val;
        root->left=NULL;
        root->right=NULL;
        root->parent=NULL;
    }

    void insertOther(int val){
        Node *temp=root;
        Node *prev =NULL;
        while(temp!=NULL)
        {
            prev=temp;
            if (val< temp->key)
            {
                temp=temp->left;
            }
            else{
                temp= temp->right;
            }
        }
        temp=(Node*)malloc(sizeof(Node));
        temp->key=val;
        temp->right=NULL;
        temp->parent=prev;
        if(val< prev->key)
        {
            prev->left=temp;
        }
        else{
            prev->right=temp;
        }
    }

public:
    void insert(int val){
        if(root==NULL)
            insertRoot(val);
        else
            insertOther(val);
    }

    Node* findNode(int val){
        Node *temp=root;
        while(temp!= NULL)
        {
            if(val==temp->key)
                return temp;
            else if(val< temp->key)
                temp= temp->left;
            else
                temp= temp->right;
        }
        return temp;
    }

    Node* findMaximum(Node *node){
        Node *temp =node;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        return temp;
    }

    Node* findMinimum(Node *node){
        Node *temp =node;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        return temp;
    }

    void dfs(Node *node){
        if(node==NULL)
            return;
        else{
           dfs(node->left);
           cout<<node->key<<" ";
           dfs(node->right);
        }
    }

private:
    Node* findSuccessor(Node *node){
        return findMinimum(node->right);
    }

    void delete0Child(Node *node){
        Node *x= node->parent;
        if(node==root)
        {
            root=NULL;

        }
        else{
            if(x->left ==node)
            {
                x->left ==NULL;
            }
            else{
                x->right ==NULL;
            }
        }
        delete node;
    }

    void delete1Child(Node *node){
        Node *next_node;
        Node *previous_node;
        if(node->left != NULL)
        {
            next_node= node->left;
        }
        else{
            next_node= node->right;
        }
        previous_node= node->parent;
        if(previous_node->left ==node)
        {
            previous_node->left =next_node;

        }
        else{
            previous_node->right =next_node;
        }
        delete node;
    }

    void delete2Child(Node *node){
        Node *x = findSuccessor(node);
        node->key = x->key;
        if(x->right==NULL)
        {
            delete0Child(x);
        }
        else{
            delete1Child(x);
        }
    }

public:
    bool deleteNode(int val){
        Node *node= findNode(val);
        if(node==NULL)
        {
            return false;
        }

        else{
            if(node->left==NULL && node->right==NULL)
            {
                delete0Child(node);
            }
            else if(node->left==NULL || node->right==NULL)
            {
                delete2Child(node);

            }
            else
            {
                delete1Child(node);

            }
            return true;
        }
    }

    int height(Node *node){
        int h1=0, h2=0;
        if(node==NULL)
        {
            return 0;
        }
        if(node->left!=NULL)
        {
            h1=height(node->left)+1;
        }
        if(node->right!=NULL)
        {
            h2=height(node->right)+1;
        }
        return max(h1,h2);

    }

    void bfs(){
        queue<Node*> q;
        root->level = 0;
        int level = root->level;
        q.push(root);

        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            if(temp->level > level){
                cout<<endl;
                level++;
            }
            cout<<temp->key<<" ";
            if(temp->left!=NULL){
                if(temp->left!=root)  temp->left->level = temp->level + 1;
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                if(temp->right!=root)  temp->right->level = temp->level + 1;
                q.push(temp->right);
            }
        }
    }
};

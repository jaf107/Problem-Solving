#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *left, *right, *parent;
};

Node *root;

void init(){
    root = NULL;
}

void insertRoot(int val){

}

void insertOther(int val){

}

void insert(int val){

}

Node* findNode(int val){

}

Node* findMaximum(Node *node){

}

Node* findMinimum(Node *node){

}

void dfs(Node *node){

}

Node* findSuccessor(Node *node){

}

void delete0Child(Node *node){

}

void delete1Child(Node *node){

}

void delete2Child(Node *node){

}

bool deleteNode(int val){

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
            q.push(temp->left);
            if(temp->left!=root)  temp->left->level = temp->level + 1;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
            if(temp->right!=root)  temp->right->level = temp->level + 1;
        }
    }

}


int main(){
    init();
    cout<<"1. Insert\n2. Sort\n3. Level Order\n4. Minimum\n5. Maximum\n6. Delete\n\n";

    while(1){
        int x;
        cin>>x;

        if(x==1){
            cout<<"Insert Value: ";
            int y;
            cin>>y;
            insert(y);
        }

        else if(x==2){
            cout<<"Sorted: ";
            dfs(root);
            cout<<endl;
        }

        else if(x==3){
            cout<<"Level:"<<endl;
            bfs();
            cout<<endl;
        }

        else if(x==4){
            cout<<"Minimum: ";
            Node *min = findMinimum(root);
            cout<<min->key<<" Root: "<<root->key<<endl;
        }

        else if(x==5){
            cout<<"Maximum: ";
            Node *max = findMaximum(root);
            cout<<max->key<<" Root: "<<root->key<<endl;
        }

        else if(x==6){
            cout<<"Delete Value: ";
            int y;
            cin>>y;
            bool b = deleteNode(y);
            if(b)   cout<<"Deleted"<<endl;
            else    cout<<y<<" not found"<<endl;
        }
    }
}

/*
1
44

1
17

1
88

1
32

1
65

1
97

1
28

1
54

1
82

1
29

1
76

1
80
*/




















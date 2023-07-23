#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int explored[101];
int parent[101];
int cost[101][101];
int key[101];
int n, e;

class Node {

public:
    int id,key;

    Node(int i, int k){
        id = i;
        key = k;
    }

    void print(){
        cout<<"Id: "<<id<<" || Key: "<<key<<endl;
    }
};

void init(){
     for(int i=1;i<=n;i++)
     {
         key[i]=INF;
     }
}
/*double weight(int x, int y)
{
    x=x*x;
    y=y*y;
    double w= (x-y)/2;
    return w;
}*/

void input(){
    cin>>n>>e;
    int x,y;
    int c;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y>>c;
       // c=weight(x,y);
        cost[x][y]=c;
        cost[y][x]=c;
    }

}

bool operator<(const Node& child, const Node& parent)
{
    if(parent.key<child.key){
        return true;
    }
    return false;

}

void mst(int root){
    parent[root]=-1;
    key[root]=0;

    priority_queue<Node>pq;
    Node no(root,0);
    pq.push(no);

    while(pq.size()!=0)
    {
        Node m=pq.top();
        pq.pop();
        int king =m.id;
        if(explored[king]==1)
            continue;

        explored[king]=1;
        for(int i=1;i<=n;i++)
        {
            if(cost[king][i]!=0 && explored[i]!=1 && key[i]>cost[king][i])
            {
                Node temp(i,cost[king][i]);
                pq.push(temp);
                parent[i]=king;
                key[i]=cost[king][i];
            }
        }
    }

}

double mstCost(int n){
    if(n==0) return 0;

    if(parent[n]==-1)
        return mstCost(n-1);
    else
        return (cost[n][parent[n]]+mstCost(n-1));

}

void showEdges(){
    for(int i=1;i<=n;i++)
    {
        int j= parent[i];
        if(j==-1)
            continue;
        cout<<i<<" "<<j<<" "<<cost[i][j]<<endl;
    }

}


int main()
{
    freopen("mstinput.txt","r",stdin);
    init();
    input();

    mst(1);
    double cost = mstCost(n);
    showEdges();
    cout<<"Total cost: "<<cost;
}

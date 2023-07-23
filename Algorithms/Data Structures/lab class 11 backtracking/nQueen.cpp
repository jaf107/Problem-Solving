#include<bits/stdc++.h>
using namespace std;

int N;
int board[100][100];
int cnt = 0;

void init(){
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++) board[i][j]=0;
    }
}

void print(){
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++) cout<<board[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl<<endl;
}

int isSafe(int r, int c){
    int i = r;
    int j = c;

    while(1){
        if(i==0)    break;
        if(board[i][j]==1)  return 0;
        i--;
    }

    i = r;
    while(1){
        if(i==0 || j==0)    break;
        if(board[i][j]==1)  return 0;
        i--;
        j--;
    }

    i = r;
    j = c;
    while(1){
        if(i==0 || j==N+1)  break;
        if(board[i][j]==1)  return 0;
        i--;
        j++;
    }
    return 1;
}

void solver(int i){
    if(i==N+1){
        cnt++;
        print();
        return;
    }

    for(int j=1; j<=N; j++){
        if(isSafe(i,j)==1){
            board[i][j] = 1;
            solver(i+1);
            board[i][j]=0;
        }
    }
}

int main(){
    cin>>N;
    init();
    solver(1);
    cout<<endl<<cnt;
}

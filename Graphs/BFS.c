#include <stdio.h>
#define N 10
int q[N];
int front=-1;
int rear=-1;
int isEmpty(){
    if(rear==-1 && front==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(int x){
    if(rear==-1 && front==-1){
        rear=front=0;
        q[rear]=x;
    }
    else{
        rear++;
        q[rear]=x;
    }
}
int dequeue(){
    if(rear==front){
        rear=front=-1;
    }
    else{
        front++;
    }
    return q[front];
    
}
int main(){
    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d ",i);
    visited[i]=1;
    enqueue(i);
    while(!isEmpty()){
        int node=dequeue();
        for(int j=0;j<7;j++){
            if(a[node][j]==1 && visited[j]==0){
                printf("%d",j);
                visited[j]=1;
                enqueue(j);
            }
            
        }

    }
    return 0;
}
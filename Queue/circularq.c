#include <stdio.h>
#define N 5
int cq[N];
int front =-1;
int rear=-1;
void enqueue(int x){
    if(front==-1 && rear==-1){
        front=rear=0;
        cq[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("OVERFLOW !!\n");
    }
    else{
        rear=(rear+1)%N;
        cq[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("UNDERFLOW !! \n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void display(){
    if(front==-1 && rear==-1){
        printf("EMPTY !!\n");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",cq[i]);
            i=(i+1)%N;
        }
        printf("%d \n",cq[rear]);
    }
}
int main(){
     printf("1.ENQUEUE\n");
    printf("2.DEQUEUE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    int c;
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&c);
    while(1){
        if(c==1){
            int val;
            printf("ENTER THE VALUE TO BE ADDED : ");
            scanf("%d",&val);
            enqueue(val);
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==2){
            dequeue();
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==3){
            display();
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==4){
            break;
        }
        else{
            printf("INVALID CHOICE!! \n");
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
    }
    return 0;
}
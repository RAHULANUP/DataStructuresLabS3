#include <stdio.h>
#define N 5
int q[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1){
        printf("OVERFLOW !!\n");
    }
    else if(rear==-1 && front==-1){
        front=rear=0;
        q[rear]=x;
    }
    else{
        rear++;
        q[rear]=x;
    }
}
void dequeue(){
    if(rear==-1 && front==-1){
        printf("UNDERFLOW !!\n");
    }
    else if(rear==front){
        rear=front=-1;
    }
    else{
        front++;
    }
}
void display(){
    if(rear==-1 && front==-1){
        printf("EMPTY !! \n");
    }
    else{
        for(int i=front;i<rear+1;i++){
            printf("%d ",q[i]);
        }
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
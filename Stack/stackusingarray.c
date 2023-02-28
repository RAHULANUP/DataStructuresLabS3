# include <stdio.h>
# define N 5
int stack[N];
int top=-1;
void push(int x){
    if(top==N-1){
        printf("OVERFLOW !!!");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("UNDERFLOW !!!");
    }
    else{
        int item=stack[top];
        top--;
        printf("The popped item is %d \n",item);
    }
}
void peek(){
    printf("The topmost element is %d \n",stack[top]);
}
void display(){
    printf("%d <-top \n",stack[top]);
    for(int i=top-1;i>=0;i--){
        printf("%d \n",stack[i]);
    }
}
int main(){
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.PEEK\n");
    printf("4.DISPLAY\n");
    printf("5.EXIT\n");
    int c;
    printf("ENTER YOUR CHOICE : ");
    scanf("%d",&c);
    while(1){
        if(c==1){
            int val;
            printf("ENTER THE VALUE TO BE PUSHED : ");
            scanf("%d",&val);
            push(val);
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==2){
            pop();
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==3){
            peek();
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==4){
            display();
            printf("ENTER NEXT CHOICE : ");
            scanf("%d",&c);
        }
        else if(c==5){
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
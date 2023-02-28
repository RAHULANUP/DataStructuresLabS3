#include<stdio.h>
int inddelete(int A[],int size,int index){
    for(int i=index;i<size;i++){
        A[i]=A[i+1];
    }
}
void display(int A[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int A[]={1,2,3,4,5};
    int size=5;
    int index=3;
    inddelete(A,size,index);
    size-=1;
    display(A,size);
}
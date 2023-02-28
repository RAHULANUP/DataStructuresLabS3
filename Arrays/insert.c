#include <stdio.h>
int insertion(int A[],int size,int index,int capacity,int element){
    if(size>=capacity){
        return -1;
    }
    else{
        for(int i=size-1;i>=index;i--){
            A[i+1]=A[i];
        }
        A[index]=element;
        return 1;
    }
}

void display(int A[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    
    int A[100]={1,2,3,4,5};
    int size=5;
    int capacity=100;
    int element=12,index=1;
    insertion(A,size,index,capacity,element);
    size+=1;
    display(A,size);
    return 0;
}
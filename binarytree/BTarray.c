//Implementing binary tree using array
#include <stdio.h>
#include <stdlib.h>
int tree[100];
void root(int data){
    if(tree[0]!=NULL){
        printf("tree has root");
    }
    else{
        tree[0]=data;
    }
}
void setleft(int data,int parent){
    tree[(parent*2)+1]=data;
    
}
void setright(int data,int parent){
    tree[(parent*2)+2]=data;
}
void arraydisplay(int tree[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",tree[i]);
    }
}
int main() {
    root(1);
    setleft(2,0);
    setright(3,0);
    arraydisplay(tree,3);
}
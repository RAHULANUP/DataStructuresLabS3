#include <stdio.h>
int linearsearch(int arr[],int n,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,4,3,2,7};

    int index1=linearsearch(arr,5,2);
    if(index1==-1){
        printf("ELEMENT NOT FOUND !!\n");
    }
    else{
        printf("ELEMENT FOUND AT INDEX %d \n",index1);
    }

    int index2 = linearsearch(arr,5,8);
    if(index2==-1){
        printf("ELEMENT NOT FOUND !!\n");
    }
    else{
        printf("ELEMENT FOUND AT INDEX %d \n",index2);
    }

    return 0;
}
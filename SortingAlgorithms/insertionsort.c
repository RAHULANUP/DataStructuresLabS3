#include <stdio.h>
#include <stdlib.h>
void insertionsort(int arr[],int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=arr[i];
        j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={5,4,3,6,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,len);
    printarray(arr,len);
    return 0;
}
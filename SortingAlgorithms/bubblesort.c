#include <stdio.h>
void bubblesort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bubblesort(arr,len);
    printarray(arr,len);
    return 0;
}
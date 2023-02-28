#include <stdio.h>
void selectionsort(int arr[],int n){
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    selectionsort(arr,len);
    printarray(arr,len);
    return 0;
}

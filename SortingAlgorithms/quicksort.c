#include <stdio.h>
void partition(int arr[],int low,int high){
    if(low<high){
        int pivotindex=high;
        int storeindex=low;
        for(int j=low;j<high;j++){
            if(arr[j]<arr[pivotindex]){
                int temp = arr[j];
                arr[j]=arr[storeindex];
                arr[storeindex]=arr[j];
                storeindex++;
            }
            
        }
        int temp = arr[pivotindex];
        arr[pivotindex]=arr[storeindex];
        arr[storeindex]=temp;
        pivotindex=storeindex;
        partition(arr,low,pivotindex-1);
        partition(arr,pivotindex+1,high);
    }
    
}

void quicksort(int arr[],int n){
    partition(arr,0,n-1);
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={5,4,3,6,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,len);
    printarray(arr,len);
    return 0;
}
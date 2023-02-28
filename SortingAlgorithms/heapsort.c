#include <stdio.h>
void heapsort(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int temp = arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapify(arr,n,0);
    }
}
void heapify(int arr[],int n,int i){
    int largest=i;
    int leftChild =(2*i)+1;
    int rightChild = (2*i)+2;
    if(leftChild<=n && arr[leftChild]>arr[largest]){
        largest=leftChild;
    } 
    if(rightChild<=n && arr[rightChild]>arr[largest]){
        largest=rightChild;
    }
    if(largest!=i){
        int temp = arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
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
    heapsort(arr,len);
    printarray(arr,len);//SORTS IN DESCENDING ORDER!!
    return 0;
}
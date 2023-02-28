#include <stdio.h>
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

void merge(int arr[],int lb,int mid,int ub){
    int temp[50];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ub){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=lb;i<=ub;i++){
        arr[i]=temp[i];
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
    mergesort(arr,0,len-1);
    printarray(arr,len);
    return 0;
}
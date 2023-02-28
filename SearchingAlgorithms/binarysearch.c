#include <stdio.h>
int binarysearch(int arr[],int low,int high,int val){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]>val){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,4,5,6,7};

    int index1=binarysearch(arr,0,5,4);
    if(index1==-1){
        printf("ELEMENT NOT FOUND !!\n");
    }
    else{
        printf("ELEMENT FOUND AT INDEX %d \n",index1);
    }

    int index2 = binarysearch(arr,0,5,8);
    if(index2==-1){
        printf("ELEMENT NOT FOUND !!\n");
    }
    else{
        printf("ELEMENT FOUND AT INDEX %d \n",index2);
    }

    return 0;
}
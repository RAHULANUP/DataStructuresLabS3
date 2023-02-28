#include <stdio.h>
int main(){
    int matrix[4][5]={
        {0,2,0,0,0},
        {0,0,0,0,0},
        {1,2,3,0,0},
        {0,0,0,1,0}
    };
    int size=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]!=0){
                size++;
            }
        }
    }
    int M[3][5];
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]!=0){
                M[0][k]=i;
                M[1][k]=j;
                M[2][k]=matrix[i][j];
                k++;
            }
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
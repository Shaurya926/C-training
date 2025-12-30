#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{4,3,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr[i][j]);
        }printf("\n");
    }
}
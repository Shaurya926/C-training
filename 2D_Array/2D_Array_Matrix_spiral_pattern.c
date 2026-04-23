#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{2,9,7},{5,3,7}};
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<2;i++)
    {
        for(int j=2;j>=0;j--){
            if(j==1)
                continue;
            printf(" %d",arr[1][j]);
        }
        printf("\n");
    }
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i>0;i--){
        for(int j=0;j<1;j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
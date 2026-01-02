#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{4,3,9}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum +=arr[i][j];
                
        }
        printf(" Sum of row %d=%d\n",i+1,sum);
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum +=arr[j][i];
                
        }
        printf(" Sum of col %d=%d\n",i+1,sum);
}
}

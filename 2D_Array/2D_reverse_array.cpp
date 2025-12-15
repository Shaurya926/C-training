#include <stdio.h>
// Program to reverse each row of a 2D array
int main()
{
    int arr[3][3]=
    {
        {1,2,3},
        {4,6,7},
        {2,9,6}
    };
    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf(" %d",arr[i][j]);
        }printf("\n");
    }
}


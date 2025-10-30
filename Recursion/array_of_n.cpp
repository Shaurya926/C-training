#include <stdio.h>
int sum(int arr[] , int n)
{
    if(n==0){
        return 0;
    }
    return arr[n-1]+ sum(arr, n-1);
}
int main()
{
    int arr[4]={1,2,3,4};
    int n=4;
    int data = sum(arr, n);
    printf("%d\n",data);
}

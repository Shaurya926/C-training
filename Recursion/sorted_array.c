#include <stdio.h>
int shorted_array(int arr[], int n)
{
    if (n==1)
    {
        return arr[0];
    }
    int shorted=shorted_array(arr, n-1);
    if (shorted>arr[n-1])
    {
        return arr[n-1];
    }
    else
    {
        return shorted;
    }
}
int main()
{
    int arr[4]={2,8,1,4};
    int n=4;
    int result=shorted_array(arr, n);
    printf("Shorted element is %d\n", result);
}
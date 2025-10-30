#include <stdio.h>
int arr[3]={1,2,3};
int array_sum(int n){
    if(n<0)
    {
        return 0;
    }
    int sum= arr[n]+ array_sum(n-1);
    return sum; 
}int main()
{
    int result= array_sum(2);
    printf("%d\n",result);
}
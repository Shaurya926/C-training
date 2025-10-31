#include <stdio.h>
int binary_search(int arr[], int t, int s, int e)
{
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==t){
        return mid;
    }
    else if(arr[mid]<t){
        return binary_search(arr, t, mid+1, e);
    }
    else{
        return binary_search(arr, t, s, mid-1);
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int target=4;
    int result=binary_search(arr, target, 0, 4);
    printf("%d\n", result);
}
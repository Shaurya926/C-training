#include <stdio.h>
#include <string.h>
int palindrome(int arr[], int i, int j)
{
    if(i>=j)
    {
        return 1;
    }
    if (arr[i]!=arr[j])
    {
        return 0;
    }
    return palindrome(arr, ++i, --j);
}
int main()
{
    int arr[4]={1,2,1,4};
    int n=4;
    if (palindrome(arr, 0, n-1))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}

#include<stdio.h>
int main()
{
   int arr[7]={1,6,7,11,2,3,5};
   int n=5;
   int Xor=0;
    for(int i=0;i<4;i++)
    {
         Xor=Xor^arr[i];
    }
    for(int i =1;i<=n;i++)
    {
         Xor=Xor^i;
    }
    printf("The missing number is %d",Xor);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// This code finds the missing number in an array of size n-1 containing numbers from 1 to n using XOR operation.

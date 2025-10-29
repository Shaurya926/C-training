#include<stdio.h>
int main()
{
   int arr[4]={1,2,3,5};
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
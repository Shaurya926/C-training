#include<stdio.h>
int main()
{
    int arr[5]={4,3,2,4,3};
    int Xor=0;
    for(int i=0;i<5;i++)
    {
        Xor=Xor^arr[i];
    }
    printf("%d",Xor);
    return 0;
}
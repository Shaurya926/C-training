//Find maximmum sum of sub array from given array from a given array whose (Code dependent)

#include<stdio.h>
int main()
{
    int a[6]={1,3,-4,7,0,-9};
    int k=3,max=0,b,i;
    for(i=0;i<=6-2;i++)
    {
        if(max<a[i]+a[i+1]+a[i+2])
        {
            max=a[i]+a[i+1]+a[i+2];
            b=i;
        }
    }
    int sum=0;
    for(i=b;i<b+3;i++)
    {
        printf("\nIndex : %d Element : %d",i,a[i]);
        sum=sum+a[i];
    }
    printf("\nThe sum of all elements : %d",sum);

}
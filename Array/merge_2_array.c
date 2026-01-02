#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={4,5,6,8,9};
    int c[10];
    for(int i=0;i<5;i++)
    {
        c[i]=a[i];
        c[i+5]=b[i];
    }printf("c[10]=");
    for(int i=0;i<10;i++)
    {
       printf("%d ",c[i]);

    }
    }

    
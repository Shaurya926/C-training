#include<stdio.h>
int main()
{
    for(int i=0;i<=6;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int k=6;k>i;k--){
            printf(" ");
        }for(int p=6;p>i;p--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}
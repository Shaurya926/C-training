#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("%d",*(p));
    printf("%d",*(p+1));
    printf("%d",*(p+2));
    printf("%d",*(p+3));
    printf("%d",*(p+4));
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d",*(p+i));
    }
}
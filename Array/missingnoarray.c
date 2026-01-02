#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int sum=0;
    int num=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }for(int i=1;i<=5;i++){
        num=num+i;
    }
    printf("Missing number is %d",num-sum);
    return 0;
}
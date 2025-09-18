#include<stdio.h>
int main(){
    int arr[5]={-8,2,-3,4,9};
    int maxSum=0;

    for(int i=0;i<5;i++){
        int curSum=0;
        for(int j=i;j<5;j++){
            curSum= curSum+arr[j];
            if(curSum>maxSum){
                maxSum=curSum;
            }
            }
        }
        printf("%d",maxSum);
    }
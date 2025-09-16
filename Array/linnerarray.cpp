#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int target=4;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            printf("%d",arr[i]);
            break;
        }
    }
}
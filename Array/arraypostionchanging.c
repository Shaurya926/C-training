#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<5;i++){
        arr[i]=arr[i+1];
    }
    arr[4]=10;
    printf("\nafter ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
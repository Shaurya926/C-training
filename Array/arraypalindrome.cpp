#include<stdio.h>
int main(){
    int arr[5]={1,2,3,2,1};
    int check=1;
    for(int i=0;i<5/2;i++){
        if (arr[i]!=arr[5-1-i]){
            check=0;
            break;
        }
    }
    if (check){
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
#include<stdio.h>
int printx(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<i;j++){
            printf("*");
            for(int k=4;k>i;k--){
                printf(" ");
            }printf("\n");
        }
    }
}int main{
    printx();
} 
// Write a program to print a pattern of numbers in a left aligned triangle shape.
#include <stdio.h>
int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
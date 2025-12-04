#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            printf("*");
        }
        for(int k=0; k<=i; k++){
            printf(" ");
        }
        printf("\n");
    }
}
/*
Print opposite triangle
pattern
for n=5
*****
****
***
**
*
*/
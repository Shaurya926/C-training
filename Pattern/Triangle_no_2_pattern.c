#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Print right aligend triangle.
pattern
for n=5
    *
   **
  ***
 ****
*/
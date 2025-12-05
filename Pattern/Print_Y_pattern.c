#include <stdio.h>
int main()
{
    int i ,j;
    int  n = 7;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<=n/2){
            if(i == j || i+j == n-1)
                printf("*");
            
            else
                printf(" ");
            }
            else{
                if(j==n/2)
                  printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

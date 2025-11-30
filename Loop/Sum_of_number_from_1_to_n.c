#include <stdio.h>
int main()
{
    int n, sum=0, count=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(count <= n){
        sum = sum + count;
        count= count + 1;
    }
    printf("The sum of numbers from 1 to %d is %d\n", n, sum);
    scanf("%d", &n);
    return 0;
}
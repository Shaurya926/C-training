#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int square = num * num;
    printf("The square of %d is %d\n", num, square);
    return 0;

}
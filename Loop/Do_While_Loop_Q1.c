#include <stdio.h>
// Program to demonstrate a do-while loop in C
// Diffrence between while loop and do-while loop is that do-while loop executes the block of code at least 
// once before checking the condition.
int main()
{
    int i =1;
    do{
    printf("%d\n", i);
    i++;
    }
    while(i<=10);
    return 0;
}
#include <stdio.h>
int main()
{
    unsigned int a = 5; 
    unsigned int b = a << 1; 
    printf("Original: %u, After left shift by 2: %u\n", a, b);
    return 0;
}
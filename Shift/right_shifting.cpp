#include <stdio.h>
int main()
{
    int a=5;
    int b = a >> 2;
    printf("Original: %d, After right shift by 2: %d\n", a, b);
    return 0;
}
// Right shifting method useful in many real life programs like
// Graphics programming, Cryptography, Network programming etc.
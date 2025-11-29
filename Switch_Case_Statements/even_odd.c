#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    switch (n % 2)
    {
        case 0:
            printf("%d is even.\n", n);
            break;
        case 1:
            printf("%d is odd.\n", n);
            break;
    }
}
// Check whether a number is even or odd using switch case statement
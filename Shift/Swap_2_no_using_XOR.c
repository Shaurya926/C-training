#include <stdio.h>

// Swap two numbers using bitwise shifting and XOR without using a temporary variable.

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap using bitwise shifting + XOR
    a = (a << 1) ^ b;
    b = (b << 1) ^ a;
    a = (a >> 1) ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
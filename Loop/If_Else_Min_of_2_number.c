#include <stdio.h>
int main()
 {
    int num1, num2, min;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Determine the minimum of the two numbers using if-else
    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }

    // Output the minimum number
    printf("The minimum of %d and %d is %d\n", num1, num2, min);

    return 0;
}
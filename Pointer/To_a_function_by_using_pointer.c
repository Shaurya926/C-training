#include <stdio.h>

// This function takes a pointer to a function that takes two integers and returns an integer.
int operate(int (*funcPtr)(int, int), int a, int b) {
    return funcPtr(a, b); // Call the function using the function pointer
}
// A sample function that adds two integers
int add(int x, int y) {
    return x + y;
}
int main() {
    int num1 = 10, num2 = 15;
    
    // Call the operate function with the add function pointer
    int result = operate(add, num1, num2);
    
    printf("The result of adding %d and %d is: %d\n", num1, num2, result);
    return 0;
}

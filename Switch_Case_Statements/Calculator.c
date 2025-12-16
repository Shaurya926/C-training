#include <stdio.h>
// Program to print day name using switch case
int main(){
    char op;
    int a, b;
    printf("Enter opperation (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(op){
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if(b != 0){
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation! Please use one of +, -, *, /.\n");
    }
}
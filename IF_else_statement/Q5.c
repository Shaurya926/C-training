// Write a program to find the largest of two numbers.
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("The largest number is: %d\n", num1);
    } else if(num2 > num1){
        printf("The largest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
}
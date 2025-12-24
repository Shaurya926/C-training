#include <stdio.h>
 
// Program to take float input from user

int main(){
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);
    printf("You entered: %f\n", num);
    return 0;
}
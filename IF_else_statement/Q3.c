// Write aprogram to check whether a number is even or odd.
#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("The number is even.\n");
    } else if(number % 2 != 0){
        printf("The number is odd.\n");
    } else {
        printf("Invalid Input\n");
    }
    return 0;
}
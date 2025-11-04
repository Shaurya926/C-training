// Write a program to find out the truth table of the logical operators AND, OR and NOT.
#include <stdio.h>
int main() {
    int A, B;

    printf("A B | A AND B | A OR B | NOT A | NOT B\n");
    printf("----------------------------------------\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            printf("%d %d |   %d    |   %d   |  %d   |  %d\n", 
                   A, B, 
                   A && B, 
                   A || B, 
                   !A, 
                   !B);
        }
    }

    return 0;
}
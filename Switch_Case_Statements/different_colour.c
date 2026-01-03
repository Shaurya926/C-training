// Write a program to print different colours using switch case.
#include <stdio.h>
int main(){
    int colour;
    printf("Enter a colour code(1-5):");
    scanf("%d", &colour);
    switch(colour){
        case 1: printf("Red\n");
        break;
        case 2: printf("Blue\n");
        break;
        case 3: printf("Green\n");
        break;
        case 4: printf("Yellow\n");
        break;
        case 5: printf("Purple\n");
        break;
        default: printf("Invalid Colour Code!\n");
        break;
    }
}
#include <stdio.h>
// This program checks if a contact number is valid based on its length
int main() {
    char contact_no[15];
    printf("Enter your contact number: ");
    scanf("%s", contact_no);

    int length = 0;
    while (contact_no[length] != '\0') {
        length++;
    }

    switch (length) {
        case 10:
            printf("Valid contact number.\n");
            break;
        default:
            printf("Invalid contact number! A valid contact number must be 10 digits long.\n");
    }

    return 0;
}
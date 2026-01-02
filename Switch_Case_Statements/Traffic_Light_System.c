// Traffic light system using switch case
#include <stdio.h>
int main() {
    int choice;

    printf("Traffic Light System\n");
    printf("1. Red Light\n");
    printf("2. Yellow Light\n");
    printf("3. Green Light\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Red Light: Stop!\n");
            break;
        case 2:
            printf("Yellow Light: Get Ready!\n");
            break;
        case 3:
            printf("Green Light: Go!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
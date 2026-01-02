// Area calculator using switch case
#include <stdio.h>
int main() {
    int choice;
    float radius, length, breadth, side, area;

    printf("Area Calculator\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square: %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
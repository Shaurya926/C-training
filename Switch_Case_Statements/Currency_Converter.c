// Currency converter using switch case
#include <stdio.h>
int main() {
    int choice;
    float amount, converted_amount;

    printf("Currency Converter\n");
    printf("1. USD to EUR\n");
    printf("2. EUR to USD\n");
    printf("3. USD to GBP\n");
    printf("4. GBP to USD\n");
    printf("5. USD to INR\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            converted_amount = amount * 0.85; // Example conversion rate
            printf("%.2f USD is %.2f EUR\n", amount, converted_amount);
            break;
        case 2:
            converted_amount = amount * 1.18; // Example conversion rate
            printf("%.2f EUR is %.2f USD\n", amount, converted_amount);
            break;
        case 3:
            converted_amount = amount * 0.75; // Example conversion rate
            printf("%.2f USD is %.2f GBP\n", amount, converted_amount);
            break;
        case 4:
            converted_amount = amount * 1.33; // Example conversion rate
            printf("%.2f GBP is %.2f USD\n", amount, converted_amount);
            break;
        case 5:
            converted_amount = amount * 82.50; // Example conversion rate
            printf("%.2f USD is %.2f INR\n", amount, converted_amount);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
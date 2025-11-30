//Calculate "simmple interest" on a given principal amount(P), rate of interest (R), and time period(T).
#include <stdio.h>
int main()
{
    float P, R, T, SI;
    printf("Enter Principal amount: ");
    scanf("%f", &P);
    printf("Enter Rate of interest: ");
    scanf("%f", &R);
    printf("Enter Time period in years: ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);
    return 0;
}
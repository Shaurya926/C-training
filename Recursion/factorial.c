#include <stdio.h>
// Function to calculate the factorial of 'n' using recursion.
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int data= factorial(5);
    printf("%d\n",data);
}
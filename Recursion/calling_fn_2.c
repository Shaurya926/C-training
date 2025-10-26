#include <stdio.h>
// Function to calculate the sum of first 'a' natural numbers using recursion.
int sum(int a){
    if(a==0){
        return 0;
    }
    return a+sum(a-1);
}
int main()
{
    int data= sum(5);
    printf("%d\n",data);
}
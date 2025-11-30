//Given a person age, find it they should get a driving license or not.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter person's age: ");
    scanf("%d", &age);
    if(age >= 18)
    printf("Person is eligible for driving license.\n");
    else
    printf("Person is not eligible for driving license.\n");
    return 0;
}
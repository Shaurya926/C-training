// WAP to make a simple calculator using if..else statement
// + , - , * , /
// Input : 10 5 +
// Output : The Addition of Two Numbers : 15

#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter First Numbers : ");
    scanf("%d",&a);
    printf("Enter Second Numbers : ");
    scanf("%d",&b);

    printf("Enter Your Choice : ");
    scanf(" %c",&ch);
    if(ch=='+')
    {
        printf("\nThe Addition of Two Numbers : %d",a+b);
    }
    else if(ch=='-')
    {
        printf("\nThe Substraction of Two Numbers : %d",a-b);
    }
    else if(ch=='*')
    {
        printf("\nThe multiplication of Two Numbers : %d",a*b);
    }
    else if(ch=='/')
    {
        printf("\nThe Division of Two Numbers : %.2f",(float)a/b);
    }
    else
    {
        printf("\nInvalid Input");
    }
}
#include <stdio.h>
int main(){

 int a;
    printf("Enter a number:");
     scanf("%d",&a);
     switch (a=3)
     {
     case 1:
         printf("\n hello");
         break;
     case 2:
         printf("\n hi");
     default:
        printf("\n bye");
         break;

     }
return 0;
}
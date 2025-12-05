#include <stdio.h>
int main()
{
   int i, j, n = 7;
    for(i = 0; i < n; i++)
    {
         for(j = 0; j < n; j++)
         {
              if(i == 0 || i == n - 1 || i + j == n - 1)
                printf("*");
              else
                printf(" ");
         }
         printf("\n");
    }
    return 0;
}
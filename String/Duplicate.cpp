#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hellow";
   int ln= strlen(str);
   int dupli=0;
   for(int i=0;i<ln;i++){
    for(int j=i+1;j<ln;j++)
    {
        if(str[i]==str[j])
        {
            printf("%c", str[i]);
            dupli++;
        }
    }
   }
   printf("\nduplicate count=%d",dupli);
   return 0;
}
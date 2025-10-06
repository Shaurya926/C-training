#include<stdio.h>
#include<string.h>
int main()
{
  char str[]="hello world";
  int ln=strlen(str);
 for(int i=ln-1;i>=0;i--){
    printf("%c\n",str[i]);
  }
}
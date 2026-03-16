#include<stdio.h>
#include<string.h>

int main()
{    char str[]="THE QUICK BROWN FOX";
    int ln=strlen(str);
    for(int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }

}
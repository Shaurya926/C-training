#include<stdio.h>
#include<string.h>
int main()
{
    int i, ln, palindrome = 1;
     
    char str[]="hellow";
    ln = strlen(str);
    for(int i=0; i<ln/2; i++){
        if (str[i] !=str[ln -1 -i])
        {
            palindrome =0;
            break;
        }
    }
    (palindrome) ? printf("palindrome"):
    printf("not palindrome");
}
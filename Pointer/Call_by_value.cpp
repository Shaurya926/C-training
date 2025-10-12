#include<stdio.h>
int sum(int *x, int *y){
*x=12;
*y=22;
int c=(*x)+(*y);
return c;
}

    int main()
    {
        int x=11;
        int y=33;
        int data= sum(&x,&y);
        printf("%d\n",data);
        printf("%d",x+y);
    }

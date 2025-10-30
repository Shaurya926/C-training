#include <stdio.h>
void sum(int a){
    if(a==0){
        return;
    }
    sum(a-1);
    printf("%d\n",a);
} int main(){
    sum(6);
}
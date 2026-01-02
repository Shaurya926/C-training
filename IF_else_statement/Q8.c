//  Grade calculator using if..else statement
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks >= 90 && marks <= 100){
        printf("Grade: A\n");
    }
    else if(marks >= 75 && marks < 90){
        printf("Grade: B\n");
    }
    else if(marks >= 65 && marks < 75){
        printf("Grade: C\n");
    }
    else if(marks >= 55 && marks < 65){
        printf("Grade: D\n");
    }
    else if(marks >= 0 && marks < 55){
        printf("Grade: F\n");
    }
    else{
        printf("Invalid marks entered.\n");
    }
}
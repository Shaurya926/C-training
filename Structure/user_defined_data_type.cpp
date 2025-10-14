#include <stdio.h>
#include <string.h>

struct address
{
    int PINCODE;
};

struct Student 
{
    char Name[30];
    int age;
    int Roll_no;
    struct address s2;

};

int main()
{
    struct Student s1;
    s1.age=20;
    s1.Roll_no=101;
    address s2;
    s1.s2.PINCODE=68879;
    strcpy(s1.Name,"Shaurya");
    printf("%d\n",s1.age);
    printf("%s\n",s1.Name);
    printf("%d\n",s1.Roll_no);
    printf("%d\n",s1.s2.PINCODE);
}
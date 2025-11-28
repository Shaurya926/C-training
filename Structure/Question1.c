//Write aprogram to input and display the details pf one employee using structure.

#include <stdio.h>
#include <string.h>


struct Employee
{
    int ID;
    char Name[20];
    float Salary;    
};

int main()
{
    struct Employee emp;
    emp.ID = 213149;
    emp.Salary = 55000.50;
    strcpy(emp.Name, "Shaurya Dubey");
    printf("Employee ID: %d\n", emp.ID);
    printf("Employee Name: %s\n", emp.Name);
    printf("Employee Salary: %.2f\n", emp.Salary);
    return 0;
}
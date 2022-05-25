#include<stdio.h>

int main()
{
    double dearness_allowance,basic_salary,house_rent,gross_salary;

    printf("Enter salary : ");
    scanf("%lf",&basic_salary);

    dearness_allowance=0.4*basic_salary;
    house_rent=0.2*basic_salary;
    gross_salary=basic_salary-dearness_allowance-house_rent;

    printf("GROSS SALARY OF NILOY IS :%.4lf",gross_salary);


    return 0;
}

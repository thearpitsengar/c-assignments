// Q12. Write a program to calculate salary of an employee, given his basic pay
// (entered by user), HRA=15% of the basic pay and TA=20% of the basic pay.

#include <stdio.h>
int main(){
    long long int basicPay, hra, ta, totalSalaryOfEmployee;

    printf("Enter your basic pay: ");
    scanf("%lld", &basicPay);
    hra = 15 * basicPay/100;
    ta = 20 * basicPay/100;
    totalSalaryOfEmployee = basicPay + hra + ta;

    printf("Total Salary of Employee is: %lld\n", totalSalaryOfEmployee);

    return 0;
}
// Q.2 Write a C program to calculate the weekly wages of an employee. The pay depends 
// on wages per hour and number of hours worked.Moreover, if the employee has
// worked for more than 30 hours,then he or she gets twice the wages per hour,
// for every extra hour that he or she has worked.

#include <stdio.h>
int main(){

    int noOfHoursWorked, wagesPerHour;
    float weeklyWages;
    const int fixedHours=30;

    printf("Enter the number of hours worked:");
    scanf("%d", &noOfHoursWorked);
    printf("Enter the wages per hour:");
    scanf("%d", &wagesPerHour);
    //check if number of hours is greater than fixed hours.
    if (noOfHoursWorked > fixedHours)
    {
        weeklyWages = (fixedHours*wagesPerHour) + ((noOfHoursWorked-fixedHours) * (wagesPerHour*2));
    }
    else
    {
        weeklyWages = noOfHoursWorked*wagesPerHour;
    }
    printf("Weekly wage is: %.2f\n", weeklyWages);

    return 0;
}
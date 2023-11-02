// Q.18 Write a program to find the sum of your four last digit of your university
// roll number.

#include <stdio.h>
int main(){

    int rollNumber;
    int lastFourDigits;
    int sumOfLastFourDigits = 0;

    printf("Enter your Roll Number: ");
    scanf("%d", &rollNumber);

    // Extract the last four digits of the university roll number
    lastFourDigits = rollNumber % 10000;

    // Calculate the sum of the last four digits
    while (lastFourDigits > 0) {
        sumOfLastFourDigits += lastFourDigits % 10;
        lastFourDigits /= 10;
    }

    // Print the sum of the last four digits
    printf("The sum of the last four digits of my university roll number is %d.\n", sumOfLastFourDigits);
    
    return 0;
}
// Q8. Write a program that prints the floating point value in exponential format
// correct to two decimal places.

#include <stdio.h>
int main(){
    
    float number;

    printf("Enter a floating point value: ");
    scanf("%f", &number);
    // here %.2e means it gives precise exponential value
    printf("%.2e\n", number);

    return 0;
}
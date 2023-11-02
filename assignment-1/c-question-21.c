// Q21. Write a program that reads nine integers. Display these numbers by printing
// three numbers in a line separated by commas.

#include <stdio.h>
int main(){

    // Declare an array to store nine integers
    int numbers[9];

    // Read nine integers from the user
    for (int i = 0; i < 9; i++) {
        printf("Enter an integer: ");
        scanf("%d", &numbers[i]);
    }

    // Print the nine integers three in a line separated by commas
    for (int i = 0; i < 9; i += 3) {
        printf("%d, %d, %d\n", numbers[i], numbers[i + 1], numbers[i + 2]);
    }
    
    return 0;
}
// Q31. One day, Mohan called Saurav and Sajal and gave some money to them,
// later he realized that money that was given to Saurav should be given 
// to Sajal and vice-versa. Develop a ‘C’ program to help Mohan so that
// he can rectify his mistake.

#include <stdio.h>
int main(){

    int moneyGivenToSaurav, moneyGivenToSajal;

    // Get the amount of money that was given to Saurav and Sajal
    printf("Enter the amount of money that was given to Saurav: ");
    scanf("%d", &moneyGivenToSaurav);

    printf("Enter the amount of money that was given to Sajal: ");
    scanf("%d", &moneyGivenToSajal);

    // Swap the amount of money that was given to Saurav and Sajal
    int temp = moneyGivenToSaurav;
    moneyGivenToSaurav = moneyGivenToSajal;
    moneyGivenToSajal = temp;

    // Print the corrected amount of money that was given to Saurav and Sajal
    printf("The corrected amount of money that was given to Saurav is %d.\n", moneyGivenToSaurav);
    printf("The corrected amount of money that was given to Sajal is %d.\n", moneyGivenToSajal);
    
    return 0;
}
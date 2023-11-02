// Q7. Raju got 6 and half apples from each of Raghu, Sheenu and Akash. He wants
// to know how many apples he has in total without adding them.
// Write a program which could help Raju in doing this.

#include <stdio.h>
int main(){
    
    // method 1 
    float applesPerPerson = 6.5;
    int noOfPeoples = 3;
    float totalApples;

    totalApples = applesPerPerson * noOfPeoples;
    printf("Raju has a total of %.2f apples. \n", totalApples);

    // method 2
    float total;
    float raghu = 6.5, sheenu = 6.5, akash = 6.5;
    total = (-raghu -sheenu -akash) * (-1);
    printf("Raju has a total of %.2f apples. \n", total);

    return 0;
}
// Q5. Write a program to read an integer, a character and a float value
// from keyboard and display the same in different lines on the screen.

#include <stdio.h>
int main(){

    int myInt;
    char mychar;
    float myFloat;

    printf("Enter integer value:");
    scanf("%d", &myInt);
    printf("Entered integer value is: ");
    printf("%d", myInt);
    printf("\n");
    printf("Enter character value:");
    //it clears the input buffer
    while((getchar()) != '\n');
    mychar = getchar();
    printf("Entered character is:");
    putchar(mychar);
    printf("\n");
    printf("Enter float value: ");
    scanf("%f", &myFloat);
    printf("Entered float value is: ");
    printf("%.2f\n", myFloat);
    return 0;
}
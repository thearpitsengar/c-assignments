// Q30. In an exam Satyam got 50 marks, Suman got 70 marks and Shyam got 80 marks,
// Write a ‘C’ program to find average marks of these three participants.

#include <stdio.h>
int main(){

    int satyamMarks = 50;
    int sumanMarks = 70;
    int shyamMarks = 80;
    float averageMarks;

    // Calculate the average marks
    averageMarks = (satyamMarks + sumanMarks + shyamMarks) / 3.0;

    printf("The average marks of the three participants is %.2f\n", averageMarks);

    return 0;
}
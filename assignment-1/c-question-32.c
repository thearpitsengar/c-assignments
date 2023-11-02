// Q32. One day when I was going for a lunch, suddenly rain started, I was very
// hungry so started running with speed of 4km/h and it took 3 min to reach mess.
// Help me to develop a ‘C’ program to calculate distance travelled by me.

#include <stdio.h>
int main(){

    float speed = 4.0; // in km/h
    float time = 3.0; // in minutes

    // Convert time from minutes to hours
    time /= 60.0;

    // Calculate the distance travelled
    float distance = speed * time;

    // Print the distance travelled
    printf("The distance travelled is %.2f km.\n", distance);
    
    return 0;
}
// Q29. Suppose distance between GLA University and Delhi is m km
// (to be entered by user), by BUS you can reach Delhi in 4 hours. 
// Develop a ‘C’ program to calculate speed of bus.

#include <stdio.h>
int main(){

    float distance, speed;

    // Prompt the user to enter the distance
    printf("Enter the distance between GLA University and Delhi in km: ");
    scanf("%f", &distance);

    // Calculate the speed of the bus
    speed = distance / 4.0;

    // Print the speed of the bus
    printf("The speed of the bus is %.2f km/h.\n", speed);

    return 0;
}
// Q 16. A car travelling at 30 m/s accelerates steadily at 5 m/s2 for a distance
// of 70 m. What is the final velocity of the car?

#include <stdio.h>
#include <math.h>
int main(){
    
    float initialVelocity = 30.0;
    float acceleration = 5.0;
    float distance = 70.0;
    float finalVelocity;

    // final velocity = initial velocity * initial velocity + 2 * acceleration * distance
    // v2 = u2 + 2as

    // Calculate the final velocity of the car
    finalVelocity = sqrt(initialVelocity * initialVelocity + 2 * acceleration * distance);

    printf("The final velocity of the car is %.2f m/s.\n", finalVelocity);

    return 0;
}
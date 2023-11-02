// Q 17. A horse accelerates steadily from rest at 4 m/s2 for 3s. (a) What is its
// final velocity? (b) How far has it travelled?

#include <stdio.h>
int main(){
    
    float initialVelocity = 0;
    float acceleration = 4.0;
    float time = 3.0;
    float finalVelocity;
    float distanceTravelled;

    // final velocity = initial velocity + acceleration * time
    // v = u + at

    finalVelocity = initialVelocity + acceleration * time;

    printf("The final velocity of the horse is %.2f m/s.\n", finalVelocity);

    // distance travelled = initial velocity*time + 1/2*acceleration*time*time
    // s = ut + 1/2at*2

    distanceTravelled = initialVelocity*time + acceleration*time*time*1/2;
    printf("Distance travelled by the horse is %.2f m.\n", distanceTravelled);    

    return 0;
}
// Q38. Tom works at an aquarium shop on Saturdays. One Saturday, when Tom gets
// to work, he is asked to clean a 175-gallon reef tank. His first job is to 
// drain the tank. He puts a hose into the tank and starts a siphon.
// Tom wonders if the tank will finish draining before he leaves work.
// He measures the amount of water that is draining out and finds that
// 12.5 gallons drain out in 30 minutes. So, he figures that the rate is
// 25 gallons per hour. Develop a ‘C’ program to help Tom to calculate time
// required to completely clean tank.

#include <stdio.h>

int main() {
    // Get the tank capacity
    int tankCapacity = 175; // in gallons

    // Get the rate at which the tank is draining
    float drainageRate = 25.0; // in gallons per hour

    // Calculate the time required to completely clean the tank
    float timeRequired = tankCapacity / drainageRate;

    // Print the time required to completely clean the tank
    printf("The time required to completely clean the tank is %.2f hours.\n", timeRequired);

    return 0;
}

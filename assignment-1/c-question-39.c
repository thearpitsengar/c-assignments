// Q39. The percent y (in decimal form) of battery power remaining x hours
// after you turn on a laptop computer is y = −0.2 x + 1. Develop a ‘C’ 
// program to calculate after how many hours the battery power is at 75%?

#include <stdio.h>

int main() {
    // Set the target battery power to 75%
    float targetBatteryPower = 0.75;

    // Declare a variable to store the number of hours required for the battery power to reach 75%
    float timeRequired;

    // Calculate the number of hours required for the battery power to reach 75%
    timeRequired = (targetBatteryPower - 1) / (-0.2);

    // Print the number of hours required for the battery power to reach 75%
    printf("The number of hours required for the battery power to reach 75%% is %.2f hours.\n", timeRequired);

    return 0;
}

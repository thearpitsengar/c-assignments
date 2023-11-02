// Q19. Write a program to initialize your height and weight in cm. and kgs
// respectively demonstrating compile time initialization and convert them
// in feets and pounds respectively.  Note :- 1 cm = 0.393701inch , 1 Kg = 2.20462

#include <stdio.h>

// Compile time initialization of height and weight
#define HEIGHT 165 // in cm
#define WEIGHT 60 // in kgs

// Conversion factors
#define CM_TO_FEET 0.0328084
#define KGS_TO_POUNDS 2.20462

int main(){

  // Declare variables to store height and weight in feet and pounds
  float height_in_feet, weight_in_pounds;

  // Convert height from cm to feet
  height_in_feet = HEIGHT * CM_TO_FEET;

  // Convert weight from kgs to pounds
  weight_in_pounds = WEIGHT * KGS_TO_POUNDS;

  // Print height and weight in feet and pounds
  printf("Height in feet: %f\n", height_in_feet);
  printf("Weight in pounds: %f\n", weight_in_pounds);
    
    return 0;
}
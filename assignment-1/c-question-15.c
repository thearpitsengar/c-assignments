// Q 15. Write a program to calculate the frequency (f) of a given wave with 
// wavelength (λ) and speed (c), where c=λ*f.

#include <stdio.h>
int main(){
    
    float frequency, wavelength, speed;

    printf("Enter the wavelength of the wave in meters: ");
    scanf("%f", &wavelength);
    printf("Enter the speed of the wave in meters per second: ");
    scanf("%f", &speed);
    
    frequency = speed/wavelength;

    printf("The frequency of the wave is: %.2f hz.\n", frequency);

    return 0;
}
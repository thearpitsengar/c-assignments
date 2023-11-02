// Q13. Write a program to find  the slope of a line and angle of inclination
// that passes through two points P and Q with coordinates (xp, yp) and (xq, yq)
// respectively.

#include <stdio.h>
#include <math.h>
int main(){
    
    double xp, yp, xq, yq, slope, angle_of_inclination;

    printf("Enter the coordinates of point P: ");
    scanf("%lf %lf", &xp, &yp);

    printf("Enter the coordinates of point Q: ");
    scanf("%lf %lf", &xq, &yq);

    slope = (yq - yp) / (xq - xp);
    angle_of_inclination = atan(slope) * 180 / M_PI;

    printf("The slope of the line is %f.\n", slope);
    printf("The angle of inclination of the line is %f degrees.\n", angle_of_inclination);


    return 0;
}
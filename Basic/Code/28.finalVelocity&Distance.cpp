/* Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, and print the final velocity, and distance traversed, using the following equations. 
a) vf = vi + at
b) s = vit + ½ at2  */

#include <stdio.h>

int main()
{
    float initialVelocity, acceleration, time, finalVelocity, distance;

    printf("Enter the InitialVelocity  =  ");
    scanf("%f", &initialVelocity);
    printf("Enter the Acceleration  =  ");
    scanf("%f", &acceleration);
    printf("Enter the time   =  ");
    scanf("%f", &time);

    finalVelocity = initialVelocity + acceleration * time;

    distance = (initialVelocity*time) + (1.0/2.0) * ((acceleration*time )/ 2);

    printf("\n\nThe final velocity is  =  %f \n\n",finalVelocity);
    printf("The Distance is  =  %f",distance);

}

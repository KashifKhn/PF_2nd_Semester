#include <stdio.h>
#include <math.h>
int main()
{
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in feet and inches: ");
    scanf("%f", &height);
    bmi = weight / pow((height * 0.3048), 2);
    printf("BMI = %f ", bmi);
    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Normal weight");
    else if (bmi >= 24.9 && bmi < 29.9)
        printf("Overweight");
    else if (bmi >= 29.9 && bmi < 34.9)
        printf("Obesity (Class 1)");
    else if (bmi >= 34.9 && bmi < 39.9)
        printf("Obesity (Class 2)");
    else
        printf("Extreme obesity (Class 3)");

    return 0;

}
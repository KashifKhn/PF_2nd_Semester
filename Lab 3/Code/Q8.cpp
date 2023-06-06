/*  Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape. using if else (Menu means that a message should be displayed like Enter 1 for circle, 2 for triangle, 3 for rectangle etc.)   */

#include <stdio.h>

int main()
{
    int choice;
    float area, radius, base, height, length, breadth;
    printf("Enter 1 for circle, 2 for triangle, 3 for rectangle: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have selected circle");
        printf("Enter the radius: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("The area of the circle is %.2f", area);
    }
    else if (choice == 2)
    {
        printf("You have selected triangle");
        printf("Enter the base: ");
        scanf("%f", &base);
        printf("Enter the height: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("The area of the triangle is %.2f", area);
    }
    else if (choice == 3)
    {
        printf("You have selected rectangle");
        printf("Enter the length: ");
        scanf("%f", &length);
        printf("Enter the breadth: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("The area of the rectangle is %.2f", area);
    }
    else
    {
        printf("Invalid choice please try again and enter a valid choice between 1 to 3");
    }

    return 0;

}
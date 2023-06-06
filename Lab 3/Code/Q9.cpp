/*  A triangle can be classified based on the lengths of its sides as equilateral, isosceles or scalene. All 3 sides of an equilateral triangle have the same length. An isosceles triangle has two sides that are the same length, and a third side that is a different length. If all of the sides have different lengths, then the triangle is scalene. Write a program that reads the lengths of 3 sides of a triangle from the user. Display a message indicating the type of the triangle.  */

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is equilateral");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The triangle is scalene");
    }

    return 0;
}
/* Write a program to check whether a triangle is Equilateral, Isosceles or Scalene. */

#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the lenght of side one of the Triangle  ");
    scanf("%d",&side1);

    printf("Enter the lenght of side two of the Triangle  ");
    scanf("%d",&side2);

    printf("Enter the lenght of side three of the Triangle  ");
    scanf("%d",&side3);

    if(side1 == side2 && side2 == side3)
        printf("The Triangle is Equilateral\n");
    else if (side1 == side2 || side2 == side3)
        printf("The triangle is Isosceles \n");
    else if (side1 != side2 && side2 != side3)
        printf("The Triangle is Scalene \n");
    
}
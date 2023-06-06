/* Write a program to check whether a given number is even or odd. */

#include <stdio.h>

int main()
{
    int number ;
    printf("Enter the Number ");
    scanf("%d",&number);

    if(number%2 == 0)
        printf("The Number is Even \n");
    else
        printf("The Number is odd \n");

}
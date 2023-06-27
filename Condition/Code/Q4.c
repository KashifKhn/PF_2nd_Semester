/* Write a program to enter a number and display the name of the day using switch statement (e.g., 1 = Monday, 2 = Tuesday, 9 = Invalid number). If user enters an invalid number, then display message to enter a valid number.  */

#include <stdio.h>

int main()
{
    int dayOfWeeks;
    printf("please Enter Your Day Number Which You want To display :  ");
    scanf("%d", &dayOfWeeks);

    switch (dayOfWeeks)
    {
    case 1:
        printf("The 1st Day of Week is Monday \n");
        break;
    case 2:
        printf("The 2nd Day of Week is Tuesday \n");
        break;
    case 3:
        printf("The 3rd Day of Week is Wednesday \n");
        break;
    case 4:
        printf("The 4th Day of Week is Thursday \n");
        break;
    case 5:
        printf("The 5ht Day of Week is Friday \n");
        break;
    case 6:
        printf("The 6th Day of Week is Saturday  \n");
        break;
    case 7:
        printf("The 7th Day of Week is Sunday  \n");
        break;
    default:
        printf("Your Number is invalid \nPlease Enter the Valid Number between 1-7 Thank you.\n");
    }
}
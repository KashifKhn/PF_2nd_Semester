/* Write a program to enter a number and display the name of month using switch statement. If user enters an invalid number, then display message to enter a valid number.  */

/* January, February, March, April, May, June, July, August, September, October, November and December */

#include <stdio.h>

int main()
{
    int month;
    printf("please Enter Your Month Number Which You want To display :  ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("The 1st Month is January \n");
        break;
    case 2:
        printf("The 2nd Month is February \n");
        break;
    case 3:
        printf("The 3rd Month is March \n");
        break;
    case 4:
        printf("The 4th Month is April \n");
        break;
    case 5:
        printf("The 5ht Month is May \n");
        break;
    case 6:
        printf("The 6th Month is June \n");
        break;
    case 7:
        printf("The 7th Month is July \n");
        break;
    case 8:
        printf("The 8th Month is August \n");
        break;
    case 9:
        printf("The 9th Month is September \n");
        break;
    case 10:
        printf("The 10th Month is October \n");
        break;
    case 11:
        printf("The 11th Month is November \n");
        break;
    case 12:
        printf("The 12th Month is December ");
        break;
    default:
        printf("Your Number is invalid \nPlease Enter the Valid Number between 1-12 Thank you.\n");
    }
}
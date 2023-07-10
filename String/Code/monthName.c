#include <stdio.h>

void printMonthName(int monthNumber, char *months[]);

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                      "October", "November", "December"};
    int monthNumber;
    printf("Enter month number: ");
    scanf("%d", &monthNumber);
    printMonthName(monthNumber, months);
}

void printMonthName(int monthNumber, char *months[])
{
    if(monthNumber < 1 || monthNumber > 12)
        printf("Invalid month number\n");
    else
        printf("Month is: %s\n", months[monthNumber - 1] );
}
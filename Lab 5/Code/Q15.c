#include <stdio.h>

int main()
{
    int number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    int tempNum = number;

    // for reverse the number
    number = 0;
    while (tempNum != 0)
    {
        int remainder = tempNum % 10;
        number = number * 10 + remainder;
        tempNum /= 10;
    }
    
    // for print the number in word
    while (number != 0)
    {
        int remainder = number % 10;
        switch (remainder)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 0:
            printf("Zero ");
            break;
        }
        number /= 10;
    }
}

/* Write a program to display the reverse of a number.  */

#include <stdio.h>

int main()
{
    int number, digit , reversNumber, tempNumber;
    printf("Enter the Number ");
    scanf("%d",&number);

    tempNumber = number;

    while (number != 0)
    {
        digit = number % 10;
        reversNumber = (reversNumber *10)+ digit ;
        number /= 10;
    }
    printf("The reverse Number of %d is %d \n",tempNumber,reversNumber);
    

}

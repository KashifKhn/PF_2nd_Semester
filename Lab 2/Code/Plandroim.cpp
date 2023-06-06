/*   Write a program to check whether the number entered by user is a palindrome or not. */

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
    if (tempNumber == reversNumber)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");

    

}

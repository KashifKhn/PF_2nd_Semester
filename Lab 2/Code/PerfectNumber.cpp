/* Write a program to check whether a given number is a 'Perfect' number or not.  */

#include <stdio.h>

int main()
{
    int number,perfectNumber, tempNumber;
    printf("Enter the Number ");
    scanf("%d",&number);

    for (int i=1;i<=number-1 ;i++)
    {
        if(number%i==0)
        {
            perfectNumber += i;
        }
    }
    if (perfectNumber == number)
        printf("Number is Perfect");
    else
        printf("Number is Not Perfect");
    
    
}

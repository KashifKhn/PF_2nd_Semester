/*  Write a program to find the HCF (Highest Common Factor) of two numbers.  */

#include <stdio.h>

int main()
{
    int number, digit , strongNumber=0 , tempNumber, sum;

    printf("Enter the Number ");
    scanf("%d",&number);

    tempNumber = number;

    while (number != 0)
    {
        sum = 1;
        digit = number % 10;
        for (int i = 1; i < digit ; i++)
        {
            sum *= i;
        }
        strongNumber += sum;
        number /=10;
        
    }
    printf("%d",strongNumber);
    
}

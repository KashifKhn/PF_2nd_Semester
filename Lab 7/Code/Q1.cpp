//Q1
#include <stdio.h>

int main()
{
    int number, palindromeNumber = 0;
    printf("Please Enter the Number: ");
    scanf("%d",&number);
    int tempNum = number;
    while (number != 0)
    {
        int remainder = number % 10;
        palindromeNumber = palindromeNumber * 10 + remainder;
        number /= 10;
    }
    if (tempNum == palindromeNumber)
        printf("%d is the Palindrome Number", tempNum);
    else 
        printf("%d is Not Palindrome Number", tempNum);

    
}
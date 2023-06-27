/* If a five-digit number is input through the keyboard, write a program to reverse the number.  */

#include <stdio.h>

int main()
{
    int number,digit,reversNumber,tempNum;
    printf("Enter Your Number = ");
    scanf("%d",&number);
    tempNum = number;
    while(number != 0)
    {
        digit = number % 10;
        reversNumber = (reversNumber*10) + digit;
        number /= 10;
    }
    printf("The Number before  %d and After Reversing  is %d ", tempNum,reversNumber);
}

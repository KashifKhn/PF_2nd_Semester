/* If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)  */

#include <stdio.h>

int main()
{
    int number,digit,sumOfDigit,tempNum;
    printf("Enter Your Number = ");
    scanf("%d",&number);
    tempNum = number;
    while(number !=0)
    {
        digit = number%10;
        sumOfDigit += digit;
        number /=10;
    }
    printf("The number %d it sum of each Digit is %d ",tempNum,sumOfDigit);
}

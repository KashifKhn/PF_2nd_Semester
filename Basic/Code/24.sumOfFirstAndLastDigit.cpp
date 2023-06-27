/*  If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.  */

#include <stdio.h>

int main()
{
    int number, digit,digit1,digit2, reversNumber,tempNum, sumOfDigit;
    printf("Enter Your Four Digit Number ");
    scanf("%d",&number);

    //store orginal number
    tempNum = number;
    
    // for reversing the number to get the first number
    while(number != 0)
    {
        digit = number % 10 ;
        reversNumber = (reversNumber * 10) + digit;
        number /=10;
    }
    // store the number again to find the last digit 
    number = tempNum;

    // to get the first Number 
    digit1 = reversNumber % 10;

    // to to get the last number
    digit2 = number % 10;

    // sum of first and last digit 
    sumOfDigit = digit1 + digit2;

    printf("The sum of First and last digit of the %d is %d ",tempNum,sumOfDigit);

}
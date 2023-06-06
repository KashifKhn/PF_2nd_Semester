/*    Write a program to check whether a given number is an Armstrong number or not. */

#include <stdio.h>
#include <math.h>

int main()
{
    int number , tempNum1, tempNum2, digit, n=0, armstrongNumber;
    printf("Enter The Number ");
    scanf("%d",&number);
    
    tempNum1 = number;
    
    while (tempNum1 != 0)
    {
        tempNum1 /=10;
        n++;
    }
    tempNum2 = number;

    while (tempNum2 != 0)
    {
        digit = tempNum2 % 10;
        armstrongNumber += pow(digit,n);
        tempNum2 /=10; 
    }

    if(number == armstrongNumber)
    	printf("The Number is Armstrong Number \n");
    else
    	printf("The Number is Not Armstrong Number \n");
    
    


}

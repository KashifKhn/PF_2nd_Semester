#include <stdio.h>
#include <math.h>

int main()
{
    int number, armstrongNumber= 0;
    printf("Enter the Number: ");
    scanf("%d", &number);
    
    // take two temp vairable to sotre the number 
    int tempNum1, tempNum2;
    tempNum1 = number;
    tempNum2 = number;

    // for count the digit in the Number 
    int countDigit = 0; 
    while(tempNum1 != 0)
    {
        tempNum1 /=10;
        countDigit++;
    }

    printf("Number of Digit: %d \n", countDigit);

    //for Armstrong number
    int remainder;
    while(tempNum2 != 0){
        remainder = tempNum2 % 10;
        armstrongNumber +=  pow(remainder, countDigit);
        tempNum2 /= 10;
    }

    // printf("Armstrong Number: %d\n\n" , armstrongNumber);

    // check the number is Armstrong or not
    if(armstrongNumber == number)
        printf("%d is Armstrong Number", number);
    else
        printf("%d is not Armstrong Number", number);
}
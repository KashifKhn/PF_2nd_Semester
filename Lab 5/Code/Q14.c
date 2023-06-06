#include <stdio.h>
#include <math.h>

int main()
{
    int firstIndex, lastIndex;
    printf("Enter the First Index: ");
    scanf("%d", &firstIndex);
    printf("Enter the Last Index: ");
    scanf("%d", &lastIndex);

    while (firstIndex <= lastIndex)
    {
        int number = firstIndex;
        int armstrongNumber = 0;

        // take two temp vairable to sotre the number
        int tempNum1, tempNum2;
        tempNum1 = number;
        tempNum2 = number;
        // for count the digit in the Number
        int countDigit = 0;
        while (tempNum1 != 0)
        {
            tempNum1 /= 10;
            countDigit++;
        }
        // for Armstrong number
        int remainder;
        while (tempNum2 != 0)
        {
            remainder = tempNum2 % 10;
            armstrongNumber += pow(remainder, countDigit);
            tempNum2 /= 10;
        }
        // check the number is Armstrong or not
        if (armstrongNumber == number)
            printf("%d is Armstrong Number \n", number);
        
        firstIndex++;
    }
}
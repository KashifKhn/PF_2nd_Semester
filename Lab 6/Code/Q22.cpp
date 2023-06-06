#include <stdio.h>

int main()
{
    int number1, number2,lcm;
    printf("Please Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&number2);
    // sotre for later use
    int tempNum1, tempNum2;
    tempNum1 = number1;
    tempNum2 = number2;
    // use Euclidean Algorithm to find GCD
    while(number2 !=0)
    {
        int tempNum = number2;
        number2 = number1 % number2;
        number1 = tempNum;
    }
    // use GCD to find LCM becacuse LCM = (num1 * num2) / GCD
    lcm = (tempNum1 * tempNum2) / number1;
    printf("The LCM of %d and %d is %d",tempNum1, tempNum2, lcm);
}
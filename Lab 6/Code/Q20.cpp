#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Please Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&number2);
    // sotre for later use
    int tempNum1, tempNum2;
    tempNum1 = number1;
    tempNum2 = number2;
    /*finding GCD using Euclidean Algorithm */
    while(number2 != 0){
        int tempNum = number2;
        number2 = number1 % number2;
        number1 = tempNum;
    }
    printf("The GCD of %d and %d is %d",tempNum1, tempNum2, number1);
}

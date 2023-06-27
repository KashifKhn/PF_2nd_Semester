#include <stdio.h>

int main()
{
    int number1, number2, smaller, gcd;
    printf("Please Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&number2);
    // store the smaller number in smaller of num1 and num2
    if(number1 < number2)
        smaller = number1;
    else
        smaller = number2;
    /*find the GCD of num1 and num2 using the smaller number 
    and decrementing it until we find the both numbers are divisible by it.
    */ 
    for(int i=smaller; i>=1; i--)
    {
        if(number1 % i == 0 && number2 % i == 0){
            gcd = i;
            break;
        }
    }
    printf("The GCD is %d", gcd);
}   
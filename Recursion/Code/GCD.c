#include <stdio.h>

int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

int main()
{
    int num1, num2;
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);
    printf("GCD of %d and %d is %d", num1, num2, gcd(num1, num2));

}
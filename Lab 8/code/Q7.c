#include <stdio.h>

int findGCD(int num1, int num2)
{
    int nom, denom;;
    if(num1 > num2)
    {
        nom = num1;
        denom = num2;
    }
    else
    {
        nom = num2;
        denom = num1;
    }
    while(denom > 0)
    {
       int  rem = nom % denom;
        nom = denom;
        denom = rem;
    }
    return nom;
}


int main()
{
    int num1, num2;
    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter Num 2: ");
    scanf("%d", &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, findGCD(num1, num2));
    return 0;
}
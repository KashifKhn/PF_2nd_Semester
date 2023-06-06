#include <stdio.h>

int findFactorial(int num)
{
    int factorial = 1;
    for(int i = num; i > 1; i--)
        factorial *= i;
    return factorial;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, findFactorial(num));
}


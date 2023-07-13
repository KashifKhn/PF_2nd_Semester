#include <stdio.h>

int sum (int *num1, int *num2)
{
    return *num1 + *num2;
}

int main()
{
    int num1, num2;
    int *p1, *p2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    int result = sum(&num1, &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, result);
}
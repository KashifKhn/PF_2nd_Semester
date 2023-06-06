#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int difference(int num1, int num2)
{
    return num1 - num2;
}

int product(int num1, int num2)
{
    return num1 * num2;
}

int quotient(int num1, int num2)
{
    return num1 / num2;
}

int modulo(int num1, int num2)
{
    return num1 % num2;
}

int calculate(char signOfOperator, int num1, int num2)
{
    switch (signOfOperator)
    {
    case '+':
        return sum(num1, num2);
    case '-':
        return difference(num1, num2);
    case '*':
        return product(num1, num2);
    case '/':
        return quotient(num1, num2);
    case '%':
        return modulo(num1, num2);
    default:
        printf("Invalid Operator\n");
        return 0;
    }
}

int main()
{
    int num1, num2;
    char signOfOperator;
    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &signOfOperator);
    printf("Enter Num 2: ");
    scanf("%d", &num2);
    printf("Result: %d\n", calculate(signOfOperator, num1, num2));
    return 0;
}

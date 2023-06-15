#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d! = %d", num, factorial(num));
}
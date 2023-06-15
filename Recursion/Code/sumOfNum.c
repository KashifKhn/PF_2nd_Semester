#include <stdio.h>

int sumFirstN(int n)
{
    if (n <= 0)
        return 0;
    return n + sumFirstN(n-1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers = %d", num, sumFirstN(num));
}
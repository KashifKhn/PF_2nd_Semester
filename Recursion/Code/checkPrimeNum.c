#include <stdio.h>

int isPrime(int num, int count)
{
    if (count == 1)
        return 1;
    if (num % count == 0)
        return 0;
    else
        return isPrime(num, count - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, num / 2))
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
}
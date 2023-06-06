#include <stdio.h>

void isPrime(int num)
{
    int divisor = 2;
    for(int i = 2; i < num/2; i++)
    {
        if(num % i == 0)
        {
            divisor++;
            break;
        }
    }
    if(divisor == 2)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrime(num);
}
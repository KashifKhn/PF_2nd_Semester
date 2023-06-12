#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return false;
    return true;
}
            

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPrime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num );
}
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int factorial = 1;
    int count = 1;
    while (count <= number)
    {
        factorial = factorial * count;
        count++;
    }
    printf("Factorial of %d is %d", number, factorial);
    
}
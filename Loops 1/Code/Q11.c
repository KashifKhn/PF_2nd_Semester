#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int divisorCount = 0;
    int count = 1;
    while (count <= number)
    {
        if (number % count == 0)
            divisorCount++;

        count++;
    }
    if(divisorCount == 2)
        printf("%d is prime Number", number);
    else
        printf("%d is not prime Number", number);

}
#include <stdio.h>

int main()
{
    int number;
    printf("Please Enter the Number you want to find all Divisor: ");
    scanf("%d", &number);
    int count = 1;
    while (count <= number/2)
    {
        if(number % count == 0)
            printf("%d is divisor of %d \n", count, number);
        count++;
    }
    printf("%d is divisor of %d \n", number, number);
    
}
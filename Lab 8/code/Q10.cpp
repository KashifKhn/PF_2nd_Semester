#include <stdio.h>

int perfectNum(int num)
{
    int sum = 0;
    for(int i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        return 1;
    else
        return 0;
}

void printPerfectNum(int upperLimit, int lowerLimit)
{
    for(int i = lowerLimit; i <= upperLimit; i++)
    {
        if(perfectNum(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int upperLimit, lowerLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);
    if(lowerLimit > upperLimit)
        printf("Invalid input\n");
    else
        printPerfectNum(upperLimit, lowerLimit);
}
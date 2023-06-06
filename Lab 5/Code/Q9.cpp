#include <stdio.h>

int main()
{
    int power, base;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);
    int result = 1;
    int count = 1;
    while (count <= power)
    {
        result = result * base;
        count++;
    }
    printf("%d to power %d is %d",base ,power, result);

}
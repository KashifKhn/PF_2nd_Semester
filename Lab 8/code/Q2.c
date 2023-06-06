#include <stdio.h>

void checkEvenOdd(int num)
{
    if (num % 2)
        printf("%d is odd\n", num);
    else
        printf("%d is even\n", num);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
}
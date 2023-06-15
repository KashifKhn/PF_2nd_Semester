#include <stdio.h>

int lcm(int num1, int num2, int i)
{
    if (i % num1 == 0 && i % num2 == 0)
        return i;
    else
        return lcm(num1, num2, i + 1);
}

int main()
{
    int num1, num2;
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);
    printf("LCM of %d and %d is %d", num1, num2, lcm(num1, num2, num1 > num2 ? num1 : num2));
}
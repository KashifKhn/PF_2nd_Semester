#include <stdio.h>

void swap(int &num1, int &num2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main()
{
    int num1, num2;
    printf("Enter Num 1: ");
    scanf("%d", &num1);
    printf("Enter Num 2: ");
    scanf("%d", &num2);
    printf("Before Swapping\n");
    printf("Num 1: %d,   ", num1);
    swap(num1, num2);
    printf("After Swapping\n");
    printf("Num 1: %d,  ", num1);
    printf("Num 2: %d\n", num2);
    return 0;
}

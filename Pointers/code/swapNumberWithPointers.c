#include <stdio.h>

void swapNumbers(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Before Swapping:\nNum1 is  %d \nNum2 is  %d\n", num1, num2);
    swapNumbers(&num1, &num2);
    printf("After Swapping:\nNum1 is  %d \nNum2 is  %d\n", num1, num2);
}
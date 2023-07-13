#include <stdio.h>
#include <stdlib.h>

int* sum (int *num1, int *num2)
{
    int* result = (int*)calloc(1, sizeof(int));
    *result = *num1 + *num2;
    return result;
}

int main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    int *result = sum(&num1, &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, *result);
    free(result);
    return 0;
}
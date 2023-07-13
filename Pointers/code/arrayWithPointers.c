#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int n)
{
    int *ptr = arr;
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
}

void printArray(int *arr, int n)
{
    int *ptr = arr;
    printf("The elements of array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int *arr;
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    inputArray(arr, n);
    printArray(arr, n);
    free(arr);
}
#include <stdio.h>

void inputArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d elements of the array: " , i+1);
        scanf("%f", &arr[i]);
    }
}

void printArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%f, ", arr[i]);
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    float arr[size];
    inputArray(arr, size);
    printf("The array is: ");
    printArray(arr, size);
    return 0;
}
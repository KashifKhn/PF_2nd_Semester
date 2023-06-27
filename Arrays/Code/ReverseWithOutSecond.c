#include <stdio.h>
#include <stdbool.h>
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d elements of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d, ", arr[i]);
}

void reverse(int arr[], int size)
{
    int firstIndex = 0;
    int lastIndex = size - 1;
    while (firstIndex < lastIndex)
    {
        int temp = arr[firstIndex];
        arr[firstIndex] = arr[lastIndex];
        arr[lastIndex] = temp;
        firstIndex++;
        lastIndex--;
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    printf("The array is: ");
    printArray(arr, size);
    reverse(arr, size);
    printf("\nThe reversed array is: ");
    printArray(arr, size);
    return 0;
}
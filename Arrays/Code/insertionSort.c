#include <stdio.h>
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

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int size;
    printf("Please Enter the Size of Array you want to create: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    printf("\nBefore the sorting\n");
    printArray(arr, size);
    // sort
    selectionSort(arr, size);
    printf("\n\n\nAfter sorting\n");
    printArray(arr, size);
}
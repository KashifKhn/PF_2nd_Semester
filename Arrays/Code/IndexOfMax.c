#include <stdio.h>
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d elements of the array: " , i+1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)

        printf("%d, ", arr[i]);
}

int findMaxNumIndex(int arr[], int size)
{
    int max = arr[0];
    int idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            idx = i;
        }
    }
    return idx;
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
    int idx = findMaxNumIndex(arr, size);
    printf("\nThe Max element is %d at index %d", arr[idx], idx);
    return 0;
}
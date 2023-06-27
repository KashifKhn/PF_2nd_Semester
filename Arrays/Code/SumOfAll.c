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

int findSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
            sum += arr[i];
    return sum;
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
    printf("\nThe sum of the array is: %d", findSum(arr, size));
    return 0;
}
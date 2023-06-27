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

int findSecondLargest(int arr[], int size)
{
    int max = arr[0];
    int secondMax = arr[0];
    for(int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }
        else if (secondMax < arr[i])
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
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
    printf("\nThe second largest element is %d", findSecondLargest(arr, size));
    return 0;
}
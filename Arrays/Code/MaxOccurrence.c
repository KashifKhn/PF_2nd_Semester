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

void findMaxOccurance(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i+1; j < size; j++)
        {
            total++;
            if (arr[i] == arr[j])
                count++;
        }
        printf("\nThe element %d occurs %d times", arr[i], count);
    }
        printf("\nTotal number of comparisons: %d", total);
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: \n");
    inputArray(arr, size);
    printf("\nThe array is: ");
    printArray(arr, size);
    findMaxOccurance(arr, size);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
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

void printCommon(int arr[], int arr2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr2[j])
            {
                printf("%d, ", arr[i]);
                break;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of first array: \n");
    inputArray(arr, size);
    int arr2[size];
    printf("Enter the elements of second array: \n");
    inputArray(arr2, size);
    printf("\nThe first array is: ");
    printArray(arr, size);
    printf("\nThe second array is: ");
    printArray(arr2, size);
    printf("\nThe common elements are: ");
    printCommon(arr, arr2, size);
    return 0;

}
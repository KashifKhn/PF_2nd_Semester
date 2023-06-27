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

void sortArray(int arr[], int size)
{
    for(int i=0; i<size; i++){
            int current = arr[i];
            int j= i-1;
            while(j>=0 && current<arr[j]){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = current;
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
    sortArray(arr, size);
    printf("\nThe sorted array is: ");
    printArray(arr, size);
    return 0;
}
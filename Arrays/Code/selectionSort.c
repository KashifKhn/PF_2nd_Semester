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

void selectionSort(int arr[], int size)
{
    int smallest = arr[0];
    int smallestIdx = -1;
    for(int i=0; i<size-1; i++)
    {
    	int smallestIdx = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < smallest)
            {
               smallest = arr[j];
               smallestIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = smallest;
        arr[smallestIdx] = temp;
        
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
    //sort
    selectionSort(arr, size);
    printf("\n\n\nAfter sorting\n");
    printArray(arr, size);
}
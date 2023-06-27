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

int Binarysearch(int arr[], int size, int key)
{
    int firstIndex = 0, lastIndex = size - 1;
    while (firstIndex <= lastIndex)
    {
        int mid = (firstIndex + lastIndex) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            lastIndex = mid - 1;
        else
            firstIndex = mid + 1;
    }
    return -1;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    int key;
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    sortArray(arr, size);
    if (Binarysearch(arr, size, key) == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", Binarysearch(arr, size, key));
    return 0;
}
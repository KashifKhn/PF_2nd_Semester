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

void findTotalPair(int arr[], int size, int key)
{
   int count = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
        
            if(arr[i] + arr[j] == x)
            {
                count++;
                printf("The pair is %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    printf("The total number of pairs is %d\n", count);
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
    int key;
    printf("\nEnter the key: ");
    scanf("%d", &key);
    findTotalPair(arr, size, key);
    
    return 0;
}
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

bool checkPalindrome (int arr[], int size)
{
   int firstIndex = 0;
   int lastIndex = size - 1;
    while (firstIndex < lastIndex)
    {
         if (arr[firstIndex] != arr[lastIndex])
                return false;
          firstIndex++;
          lastIndex--;
    }
    return true;
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
    if (checkPalindrome(arr, size))
        printf("\nThe array is a palindrome");
    else
        printf("\nThe array is not a palindrome");
    return 0;
}
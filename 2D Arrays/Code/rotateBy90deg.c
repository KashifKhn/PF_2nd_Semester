#include <stdio.h>
int row, column;

void inputArray(int arr[][column])
{
    for (int i = 0; i < row; i++)
    {
        printf("Enter the elements of %d row: \n", i + 1);
        for (int j = 0; j < column; j++)
        {
            printf("Enter the elements of %d column: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int arr[][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void transpose(int arr[][column])
{
    for(int i=0; i<row; i++)
    {
        for(int j=i; j<column; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void rotateBy90deg(int arr[][column])
{
    transpose(arr);
    for(int i=0; i<row; i++)
    {
        int start = 0;
        int end = row-1;
        while(start<=end)
        {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }
}
    

int main()
{
    printf("Enter the number of number for Both Row and column: ");
    scanf("%d", &row);
    column = row;
    int arr[row][column];
    printf("Enter the Elements of  Matrix: \n");
    inputArray(arr);
    printf("\n");
    printf("The Matrix is: \n");
    printArray(arr);
    printf("\n");
    rotateBy90deg(arr);
    printf("The Matrix after rotating by 90 degree is: \n");
    printArray(arr);
    return 0;
}
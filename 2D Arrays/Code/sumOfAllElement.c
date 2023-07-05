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

int sum(int arr[][column])
{
    int sum = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=i; j<column; j++)
        {
            sum += arr[i][j];
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
    printf("The Elements of Matrix \n");
    printArray(arr);
    printf("\n");
    printf("The sum of all elements of the matrix is: %d", sum(arr));

    return 0;
}
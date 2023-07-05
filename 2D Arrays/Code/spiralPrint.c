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

void spiralPrint(int arr[][column])
{
    int maxRow = row - 1;
    int maxColumn = column - 1;
    int minRow = 0;
    int minColumn = 0;
    int totalElements = row * column;
    int count = 0;

    while (count < totalElements)
    {
        for (int j = minColumn; j <= maxColumn && count < totalElements; j++)
        {
            printf("%d\t", arr[minRow][j]);
            count++;
        }
        minRow++;
        for (int i = minRow; i <= maxRow && count < totalElements; i++)
        {
            printf("%d\t", arr[i][maxColumn]);
            count++;
        }
        maxColumn--;
        for (int j = maxColumn; j >= minColumn && count < totalElements; j--)
        {
            printf("%d\t", arr[maxRow][j]);
            count++;
        }
        maxRow--;
        for (int i = maxRow; i >= minRow && count < totalElements; i--)
        {
            printf("%d\t", arr[i][minColumn]);
            count++;
        }
        minColumn++;
    }
}
    

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter the Elements of  Matrix: \n");
    inputArray(arr);
    printf("\n");
    printf("The Elements of Matrix \n");
    printArray(arr);
    printf("\n");
    printf("The spiral print of the matrix is: \n");
    spiralPrint(arr);
    printf("\n");
    return 0;
}
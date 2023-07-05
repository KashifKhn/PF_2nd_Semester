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

void printTransposeArray(int arr[][column])
{
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}
void transpose(int arr[][column], int transArr[column][row])
{
     for(int i=0; i<column; i++)
    {
        for(int j=0; j<row; j++)
                transArr[i][j] = arr[j][i];
        printf("\n");
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
    printf("The Elements of Matrix before Transpose: \n");
    printArray(arr);
    int transArr[column][row];
    transpose(arr, transArr);
    printf("\n");
    printf("The Elements of Matrix after Transpose: \n");
    printTransposeArray(transArr);
    return 0;
}
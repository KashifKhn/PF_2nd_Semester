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

void printRowColumn(int arr[][column], int key)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(arr[i][j]== key)
            {
                printf("The row index is: %d\n", i);
                printf("The column index is: %d\n", j);
            }
        }
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
    printf("The Matrix is: \n");
    printArray(arr);
    printf("\n");
    printf("Enter the key to find the index: ");
    int key;
    scanf("%d", &key);
    printRowColumn(arr, key);
    return 0;
}
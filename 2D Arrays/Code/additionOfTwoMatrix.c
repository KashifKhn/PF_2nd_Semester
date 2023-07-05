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

void addArray(int arr1[][column], int arr2[][column], int result[][column])
{
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<column; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int arr1[row][column];
    int arr2[row][column];
    int result[row][column];
    printf("Enter the Elements of 1st Matrix: \n");
    inputArray(arr1);
    printf("Enter the Elements of 2nd Matrix: \n");
    inputArray(arr2);
    printf("\n");

    printf("The Elements of 1st Matrix: \n");
    printArray(arr1);

    printf("\n");
    printf("The Elements of 2nd Matrix: \n");
    printArray(arr2);

    addArray(arr1, arr2, result);


    printf("\n");
    printf("The Elements of resultan Matrix: \n");
    printArray(result);

}
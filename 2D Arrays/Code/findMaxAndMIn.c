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

void findMaxAndMin(int arr[][column])
{
    int max = arr[0][0], min = arr[0][0];
    int idxMax[2], idxMin[2];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                idxMax[0] = i;
                idxMax[1] = j;

            }
            if(arr[i][j] < min)
            {
                min = arr[i][j];
                idxMin[0] = i;
                idxMin[1] = j;
            }
        }
    }
    printf("The maximum element is %d at index (%d, %d)\n", max, idxMax[0], idxMax[1]);
    printf("The minimum element is %d at index %d, %d\n", min, idxMin[0], idxMin[1]);
}

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter the Elements of Matrix: \n");
    inputArray(arr);
    printf("\n");

    printf("The Elements of  Matrix: \n");
    printArray(arr);

    findMaxAndMin(arr1, arr2, result);

}
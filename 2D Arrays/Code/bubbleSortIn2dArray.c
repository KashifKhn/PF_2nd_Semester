#include <stdio.h>
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
    for (int i = 0; i < row*column; i++)
    {
        printf("%d ", arr[i/column][i%column]);
        if ((i+1)%column == 0)
            printf("\n");
    }
}

void bubbleSort(int arr[][column])
{
    for (int i = 0; i < row*column; i++)
    {
        for (int j = i; j < row*column; j++)
        {
            if (arr[j/column][j%column] < arr[i/column][i%column])
            {
                int temp = arr[i/column][i%column];
                arr[i/column][i%column] = arr[j/column][j%column];
                arr[j/column][j%column] = temp;
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
    printf("Enter the Elements of Matrix: \n");
    inputArray(arr);
    printf("\n");
    printf("The Elements of Matrix: \n");
    printArray(arr);
    printf("\n");
    bubbleSort(arr);
    printf("The Sorted Elements of Matrix: \n");
    printArray(arr);

    return 0;
}
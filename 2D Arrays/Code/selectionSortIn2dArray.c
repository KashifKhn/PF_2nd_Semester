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

    // for (int i = 0; i < row*column; i++)
    // {
    //     printf("Enter the elements of %d row: ", i/column + 1);
    //     printf("Enter the elements of %d column: ", i%column + 1);
    //     scanf("%d", &arr[i/column][i%column]);
    // }

    
}

void printArray(int arr[][column])
{
    for (int i = 0; i < row*column; i++)
    {
        printf("%d ", arr[i/column][i%column]);
        if ((i+1)%column == 0)
            printf("\n");
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //         printf("%d ", arr[i][j]);
    //     printf("\n");
    // }
}

void selectionSort(int arr[][column])
{
    for (int i = 0; i < row*column; i++)
    {
        int min = arr[i/column][i%column];
        int min_index = i;
        for (int j = i; j < row*column; j++)
        {
            if (arr[j/column][j%column] < min)
            {
                min = arr[j/column][j%column];
                min_index = j;
            }
        }
        int temp = arr[i/column][i%column];
        arr[i/column][i%column] = arr[min_index/column][min_index%column];
        arr[min_index/column][min_index%column] = temp;
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
    selectionSort(arr);
    printf("The Sorted Elements of Matrix: \n");
    printArray(arr);

    return 0;
}
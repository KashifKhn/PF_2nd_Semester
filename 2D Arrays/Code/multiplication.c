#include <stdio.h>
    int row1, column1;
    int row2, column2;

void multiplication(int arr1[][column1], int arr2[][column2], int result[][column2])
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < column1; k++)
                result[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
}

int main()
{
    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d", &column1);
    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d", &column2);

    if(column1 != row2)
    {
        printf("The multiplication is not possible");
        return 0;
    }

    int arr[row1][column1];
    int arr2[row2][column2];
    int result[row1][column2];
    printf("Enter the elements of 1st matrix: \n");
    for (int i = 0; i < row1; i++)
    {
        printf("Enter the elements of %d row: \n", i + 1);
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the elements of %d column: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter the elements of second matrix: \n");
    for (int i = 0; i < row2; i++)
    {
        printf("Enter the elements of %d row: \n", i + 1);
        for (int j = 0; j < column2; j++)
        {
            printf("Enter the elements of %d column: ", j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n\n");
    multiplication(arr, arr2, result);
    printf("The multiplication matrices is: \n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

}
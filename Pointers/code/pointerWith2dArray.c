#include <stdio.h>

int row;
int col;

void inputArray(int* arr)
{
    for(int i=0; i<row*col; i++)
    {
        printf("Enter element %d %d: ", i/col, i%col);
        scanf("%d", arr+i);
    }
}

void printArray(int* arr)
{
    for(int i=0; i<row*col; i++)
    {
        printf("%d ", *(arr+i));
        if((i+1)%col==0)
            printf("\n");
    }
}

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int arr[row][col];
    int *ptr = arr;
    inputArray(ptr);
    printArray(ptr);

    return 0;

}
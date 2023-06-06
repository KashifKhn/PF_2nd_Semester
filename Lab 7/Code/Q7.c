#include <stdio.h>

int main()
{
    int row;
    printf("Please Enter the row numbers: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        int toPrint = i;
        for(int j=1; j<=4; j++)
        {
            printf("%d ", toPrint);
            toPrint *= 10;
        }
        printf("\n");
    }
}
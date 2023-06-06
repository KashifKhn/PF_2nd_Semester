#include <stdio.h>

int main()
{
    int row;
    printf("Enter the Number of Row you want To print: ");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        // spaces
        for(int j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        // print number
        for(int j=1; j<=2*i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
}
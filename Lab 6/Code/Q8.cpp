#include <stdio.h>

int main()
{
    int row;
    printf("Enter the Number of Row you want To print: ");
    scanf("%d",&row);

    for(int i=1; i<=row; i++)
    {
        // space
        for(int j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        // print odd star
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
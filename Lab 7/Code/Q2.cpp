#include <stdio.h>

int main()
{
    int row;
    printf("Please Enter the Number of Row to Print: ");
    scanf("%d",&row);
    int midSpace = row/2 + 1;
    for(int i=1; i<= row; i++)
    {
        for (int j=1; j<=row; j++ )
        {
            if(j == midSpace || j==row - midSpace + 1)
                printf("*");
            else
                printf(" ");
        }
        if(i<=row/2)
            midSpace--;
        else
            midSpace++;
        printf("\n");
    }
}
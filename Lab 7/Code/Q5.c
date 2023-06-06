#include <stdio.h>

int main()
{
    int row;
    printf("Please Enter the Number of Row to Print: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row - i; j++)
            printf(" ");
        for(int j=1; j<=i; j++)
            printf("%c",j+64);
        for(int j=i-1; j>=1; j--)
            printf("%c",j+64);
            
        printf("\n");
    }

}
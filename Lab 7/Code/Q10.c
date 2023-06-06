#include <stdio.h>

int main()
{
    int row;
    printf("Please Enter the row numbers: ");
    scanf("%d",&row);
    char ch = 'A';
    for(int i=row; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
            printf("%c ",ch++);
        for(int j=1; j<=2*(row-i); j++)
            printf("  ");
        for(int j=1; j<=i; j++)
            printf("%c ",--ch);
        ch = 'A';
        printf("\n");
    }
}
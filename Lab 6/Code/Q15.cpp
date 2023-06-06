#include <stdio.h>

int main()
{
    int row;
    printf("Enter the Number of Row you want To print: ");
    scanf("%d",&row);
    int toPrint = 1;
    for(int i=1; i<= row; i++)
    {
        for(int j=1; j<=row - i; j++)
        {
            printf("  ");
        }
        for (int  j = 1; j <=i; j++)
        {
            printf("%d   ",toPrint++);
            
        }
        printf("\n");
        
    }
}
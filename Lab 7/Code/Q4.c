#include <stdio.h>
//Q4
int main()
{
    int row;
    printf("Please Enter the Number of Row to Print: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            if(i%2==0 && j%2==0)
                printf("0");
            else
                printf("*");
        }
        printf("\n");
    }
}
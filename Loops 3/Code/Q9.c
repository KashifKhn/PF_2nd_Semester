#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int row;
    printf("Please Enter the row numbers: ");
    scanf("%d",&row);
    for(int i=0; i<=row; i++)
    {
        for(int j=0; j<=row-i; j++)
            printf(" ");
        for(int j=0; j<=i; j++)
            printf("%d ", factorial(i)/(factorial(j)*factorial(i-j)));

        printf("\n");
    }
}
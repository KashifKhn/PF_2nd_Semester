#include <stdio.h>

int main()
{
    int row;
    printf("Enter the Number of Row you want To print: ");
    scanf("%d", &row);

    printf("Patter of Question 6 a\n\n\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\nPatter of Question 6 b\n\n\n");
    for (int i = row; i >= 1; i--)
    {
        // for star
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("\n\n\nPatter of Question 6 c \n\n\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= row - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n\nPatter of Question 6 d\n\n\n");
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= row - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
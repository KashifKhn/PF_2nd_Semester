#include <stdio.h>

int main()
{
    int number;
    printf("Please Enter the Number to Factor : ");
    scanf("%d", &number);
    int limit;
    printf("Please Enter the Limit upto which you want to find Factor : ");
    scanf("%d", &limit);
    int count = 1;
    printf("Factor of %d upto %d is \n", number, limit);
    while (count <= limit)
    {
        printf("%d, ", number * count);
        count++;
    }
}
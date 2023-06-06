#include <stdio.h>

int main()
{
    float number,sum = 0, average;
    int count = 1;
    while (count <= 10)
    {
        printf("Enter the Number%d: ", count);
        scanf("%f", &number);
        sum += number;
        ++count;
    }

    printf("The Sum of the number is %.2f \n", sum);
    average = sum/10.0;
    printf("The Average of the number is %.3f \n",average);
    
}
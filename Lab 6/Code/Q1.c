#include <stdio.h>
#include <limits.h>

int main()
{
    int number, sum=0, count = 1;
    // store max value in smaller and min value in larger
    int larger=INT_MIN, smaller = INT_MAX;
    float average;
    while(count <= 10)
    {
        printf("Enter Number %d : ", count);
        scanf("%d",&number);
        if(larger < number)
            larger = number;
        if(smaller > number)
            smaller = number;
        sum += number;
        count++;
    }
    average = sum/10.0;
    printf("The Larger Number is = %d\n",larger);
    printf("The Smaller Number is = %d\n",smaller);
    printf("The Sum is = %d\n",sum);
    printf("The Average is = %.2f\n",average);
}
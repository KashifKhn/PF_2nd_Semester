#include <stdio.h>

int main()
{
     int nthTerm, count = 1, factorial, number;
     double sum = 0;
    printf("Enter the nth term to print Harmonic series and it sum:  ");
    scanf("%d",&nthTerm);
    while(count <= nthTerm)
    {
        printf("1/%d! + ",count);
        factorial = 1;
        number = count;
        for(int i=number; i>=1;i--)
        {
            factorial *= i;
        }
        sum += 1.0/factorial;
        count++;
    }
    printf("\nThe sum is = %.3lf ",sum);
}
#include <stdio.h>
int main()
{
    int nthTerm, count = 1;
    printf("Enter the nth term to print Harmonic series and it sum:  ");
    scanf("%d",&nthTerm);
    double sum;
    while (count <= nthTerm)
    {
        printf("1/%d + ",count);
        sum += 1.0/count;
        count++;
    }
    printf("\n");
    printf("The sum upto nth term of Harmonic series is %.3lf \n",sum); 
}
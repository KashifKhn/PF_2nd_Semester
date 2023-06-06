#include <stdio.h>
#include <math.h>

int main()
{
    int number, count=1, power=1, nthTerm;
    double sum=0,term;
    printf("Enter the Value of X : ");
    scanf("%d",&number);
    printf("Enter the Value of nth term  : ");
    scanf("%d",&nthTerm);

    while (count<=nthTerm)
    {
        //
        term =(double) (number-1)/number;
        if(power == 1)
            sum += term;
        else
            sum += (0.5) * (pow(term,power));
            
        power++;
        count++;
    }
    printf("The sum is = %lf \n",sum);
    

}
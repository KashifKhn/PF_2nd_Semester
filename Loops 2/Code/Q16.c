#include <stdio.h>
// Function to find factorial
int findFactorial(int number){
    int fact  = 1;
    for(int i=1; i<=number; i++){
        fact *= i;
    }
    return fact;
}
int main()
{
    int row, toPrint;
    printf("Enter the Number of Row you want To print: ");
    scanf("%d",&row);

    for(int i=0; i<=row; i++)
    {
        // for spaces
        for(int j=0; j<= row -i; j++)
        {
            printf(" ");
        }
        // for Pascal's Triangle
        for(int j=0; j<=i; j++)
        {     // Formula for Pascal's Triangle Using Factorial function
            toPrint = findFactorial(i)/(findFactorial(j)*findFactorial(i-j));
            printf("%d ",toPrint);
        }
        printf("\n");
    }
}

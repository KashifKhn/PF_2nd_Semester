#include <stdio.h>

int main()
{
    int fibonacciUpto, firstTerm = 0, secondTerm = 1, nextTerm;
    printf("Enter the Limit of The Sequence you want to Print Fibonacci series: ");
    scanf("%d", &fibonacciUpto);
    int count = 0;

    while (count <= fibonacciUpto)
    {
        if(count == 0)
            printf("%d\t", firstTerm);
        if(count == 1)
            printf("%d\t", secondTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        printf("%d\t", nextTerm);

        count++;
    }
    
}
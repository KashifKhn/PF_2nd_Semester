#include <stdio.h>

void fibonacci(int nthTerm, int firstTerm, int secondTerm)
{
    if (nthTerm <= 0)
        return;
    int nextTerm = firstTerm + secondTerm;
    printf("%d,  ");
    fibonacci( nthTerm-1, secondTerm, nextTerm);
}

int main()
{
    int firstTerm = 0, secondTerm = 1, nthTerm;
    printf("Enter the nth term: ");
    scanf("%d", &nthTerm);
    printf("Fibonacci series: ");
    
    fibonacci(nthTerm, firstTerm, secondTerm);

}
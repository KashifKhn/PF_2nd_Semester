#include <stdio.h>

void fibonacci(int firstTerm, int secondTerm, int nthTerm)
{
    if (nthTerm <= 0)
        return;
    int nextTerm = firstTerm + secondTerm;
    printf("%d,  ", nextTerm);
    fibonacci(secondTerm, nextTerm, nthTerm-1);
}

int main()
{
    int firstTerm = 0, secondTerm = 1, nthTerm;
    printf("Enter the nth term: ");
    scanf("%d", &nthTerm);
    printf("Fibonacci series: ");
    printf("%d,  %d,  ", firstTerm, secondTerm);
    fibonacci(firstTerm, secondTerm, nthTerm-2);

}
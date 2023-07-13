#include <stdio.h>

void printNum(int n)
{
    printf("The number is %d\n", n);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    void (*pN)(int) = printNum;
    pN(num);
    return 0;
}
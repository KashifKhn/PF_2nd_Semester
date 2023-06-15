#include <stdio.h>

int printFirstN(int n)
{
    if (n == 0)
        return 0;
    printf("%d ", n);
    return printFirstN(n-1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printFirstN(num);
}
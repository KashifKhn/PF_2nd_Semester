#include <stdio.h>

void findHailStone(int num)
{
    if(num <= 1)
        return;
    if(num % 2 == 0)
    {
        printf("%d,  ", num);
        findHailStone(num/2);
    }
    else
    {
        printf("%d,  ", num);
        findHailStone(num * 3 + 1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    findHailStone(num);
}
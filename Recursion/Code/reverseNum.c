#include <stdio.h>
#include <math.h>

int revers(int num)
{
    static int reversDigits = 0;
    
    if(num > 0)
    {
        int rem = num % 10;
        reversDigits = reversDigits * 10 + rem;
        revers(num/10);
    }
    return reversDigits;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d = %d", num, revers(num));
}
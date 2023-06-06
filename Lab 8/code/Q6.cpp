#include <stdio.h>

double squarRoot(double num)
{
    double temp = 0;
    double root = num / 2;
    while (temp != root)
    {
        temp = root;
        root = (root + num / root) / 2;
    }
    return root;
}

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Square root of %d is %lf\n",(int)num, squarRoot(num));
}
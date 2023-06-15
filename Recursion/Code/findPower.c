#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;
    if (exponent < 0)
        return 1 / power(base, - exponent);
    double result = power(base * base, exponent / 2);
    if (exponent % 2 == 1)
        result *= base;
    return result;
}

int main() {
    double base;
    int exponent;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is %.2lf\n", base, exponent, result);
    return 0;
}

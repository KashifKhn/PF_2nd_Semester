#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned long long count = 0;
    while (count<= ULLONG_MAX)
    {

        unsigned long long number = count, tempNumber, strongNumber = 0;
        tempNumber = number;

        while (number != 0)
        {
            int fact = 1;
            int remindar = number % 10;
            for (int i = remindar; i >= 1; i--)
            {
                fact *= i;
            }
            strongNumber += fact;
            number /= 10;
        }

        if (tempNumber == strongNumber)
        {
            printf("%lu is Strong Number\n", tempNumber);
        }
        count ++;
    }
}
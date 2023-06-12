#include <stdio.h>
#include <conio.h>

int main()
{
    char ch = 'A', sign = '+';
    int number = 0, result = 0, first = 1;
    while (ch != '\r' && ch != '=' && ch != '\n')
    {
        ch = getche();
        if (ch >= '0' && ch <= '9')
        {
            number = number * 10 + (ch - '0');
        }
        else if (first == 1)
        {
            first = 0;
            result = number;
            number = 0;
            sign = ch;
        }
        else
        {
            switch (sign)
            {
            case '+':
                result += number;
                sign = ch;
                number = 0;
                break;
            case '-':
                result -= number;
                sign = ch;
                number = 0;
                break;
            case '*':
                result *= number;
                sign = ch;
                number = 0;
                break;
            case '/':
                result /= number;
                sign = ch;
                number = 0;
                break;
            }
        }
    }
    printf("\nResult = %d\n", result);
}

#include <stdio.h>
#include <conio.h>

int main()
{
    int number = 0, result = 0, first = 1;
    char sign = 1, ch = 1;
    while(ch != '=' && ch != '\r')
    {
        ch = getch();
        if(ch >= '0' && ch <= '9')
        {
            number =( number * 10  ) + ch - '0';
        }
        else if(first == 1)
        {   
            sign = ch;
            result = number;
            number = 0;
            first = 0;
        }
        else
        {
            if(sign == '+')
            {
                result += number;
                number = 0;
                sign = ch;
            }
            else if(sign == '-')
            {
                result -= number;
                number = 0;
                sign = ch;
            }
            else if(sign == '*')
            {
                result *= number;
                number = 0;
                sign = ch;
            }
            else if(sign == '/')
            {
                result /= number;
                number = 0;
                sign = ch;
            }
        }
    }
    printf("  %d",result);
}

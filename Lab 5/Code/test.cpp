#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    int num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 = 0;
    char ch1, ch2, ch3, ch4, ch5;
    char ch6, ch7, ch8, ch9;
    int result;

    while (1)
    {
        printf("Enter the First Number: ");
        scanf("%d", &num1);
        printf("Enter the First Operator: ");
        scanf(" %c", &ch1);

        if (ch1 == '=')
        {
            result = num1;
            break;
        }

        printf("Enter the Second Number: ");
        scanf("%d", &num2);
        printf("Enter the Second Operator: ");
        scanf(" %c", &ch2);

        if (ch2 == '=')
        {
            if (ch1 == '+')
                result = num1 + num2;
            else if (ch1 == '-')
                result = num1 - num2;
            else if (ch1 == '*')
                result = num1 * num2;
            else if (ch1 == '/')
                result = num1 / num2;
            break;
        }

        printf("Enter the Third Number: ");
        scanf("%d", &num3);
        printf("Enter the Third Operator: ");
        scanf(" %c", &ch3);

        if (ch3 == '=')
        {
            if (ch1 == '+' && ch2 == '+')
                result = num1 + num2 + num3;
            else if (ch1 == '+' && ch2 == '-')
                result = num1 + num2 - num3;
            else if (ch1 == '+' && ch2 == '*')
                result = num1 + num2 * num3;
            else if (ch1 == '+' && ch2 == '/')
                result = num1 + num2 / num3;
            else if (ch1 == '-' && ch2 == '+')
                result = num1 - num2 + num3;
            else if (ch1 == '-' && ch2 == '-')
                result = num1 - num2 - num3;
            else if (ch1 == '-' && ch2 == '*')
                result = num1 - num2 * num3;
            else if (ch1 == '-' && ch2 == '/')
                result = num1 - num2 / num3;
            else if (ch1 == '*' && ch2 == '+')
                result = num1 * num2 + num3;
            else if (ch1 == '*' && ch2 == '-')
                result = num1 * num2 - num3;
            else if (ch1 == '*' && ch2 == '*')
                result = num1 * num2 * num3;
            else if (ch1 == '*' && ch2 == '/')
                result = num1 * num2 / num3;
            else if (ch1 == '/' && ch2 == '+')
                result = num1 / num2 + num3;
            else if (ch1 == '/' && ch2 == '-')
                result = num1 / num2 - num3;
            else if (ch1 == '/' && ch2 == '*')
                result = num1 / num2 * num3;
            else if (ch1 == '/' && ch2 == '/')
                result = num1 / num2 / num3;
            break;
        }

        printf("Enter the Fourth Number: ");
        scanf("%d", &num4);
        printf("Enter the Fourth Operator: ");
        scanf(" %c", &ch4);

        if (ch4 == '=')
        {
            if (ch1 == '+' && ch2 == '+' && ch3 == '+')
                result = num1 + num2 + num3 + num4;
            else if (ch1 == '+' && ch2 == '+' && ch3 == '-')
                result = num1 + num2 + num3 - num4;
            else if (ch1 == '+' && ch2 == '+' && ch3 == '*')
                result = num1 + num2 + num3 * num4;
            else if (ch1 == '+' && ch2 == '+' && ch3 == '/')
                result = num1 + num2 + num3 / num4;
            else if (ch1 == '+' && ch2 == '-' && ch3 == '+')
                result = num1 + num2 - num3 + num4;
            else if (ch1 == '+' && ch2 == '-' && ch3 == '-')
                result = num1 + num2 - num3 - num4;
            else if (ch1 == '+' && ch2 == '-' && ch3 == '*')
                result = num1 + num2 - num3 * num4;
            else if (ch1 == '+' && ch2 == '-' && ch3 == '/')
                result = num1 + num2 - num3 / num4;
            else if (ch1 == '+' && ch2 == '*' && ch3 == '+')
                result = num1 + num2 * num3 + num4;
            else if (ch1 == '+' && ch2 == '*' && ch3 == '-')
                result = num1 + num2 * num3 - num4;
            else if (ch1 == '+' && ch2 == '*' && ch3 == '*')
                result = num1 + num2 * num3 * num4;
            else if (ch1 == '+' && ch2 == '*' && ch3 == '/')
                result = num1 + num2 * num3 / num4;
            else if (ch1 == '+' && ch2 == '/' && ch3 == '+')
                result = num1 + num2 / num3 + num4;
            else if (ch1 == '+' && ch2 == '/' && ch3 == '-')
                result = num1 + num2 / num3 - num4;
            else if (ch1 == '+' && ch2 == '/' && ch3 == '*')
                result = num1 + num2 / num3 * num4;
            else if (ch1 == '+' && ch2 == '/' && ch3 == '/')
                result = num1 + num2 / num3 / num4;
            else if (ch1 == '-' && ch2 == '+' && ch3 == '+')
                result = num1 - num2 + num3 + num4;
            else if (ch1 == '-' && ch2 == '+' && ch3 == '-')
                result = num1 - num2 + num3 - num4;
            else if (ch1 == '-' && ch2 == '+' && ch3 == '*')
                result = num1 - num2 + num3 * num4;
            else if (ch1 == '-' && ch2 == '+' && ch3 == '/')
                result = num1 - num2 + num3 / num4;
            else if (ch1 == '-' && ch2 == '-' && ch3 == '+')
                result = num1 - num2 - num3 + num4;
            else if (ch1 == '-' && ch2 == '-' && ch3 == '-')
                result = num1 - num2 - num3 - num4;
            else if (ch1 == '-' && ch2 == '-' && ch3 == '*')
                result = num1 - num2 - num3 * num4;
            else if (ch1 == '-' && ch2 == '-' && ch3 == '/')
                result = num1 - num2 - num3 / num4;
            else if (ch1 == '-' && ch2 == '*' && ch3 == '+')
                result = num1 - num2 * num3 + num4;
            else if (ch1 == '-' && ch2 == '*' && ch3 == '-')
                result = num1 - num2 * num3 - num4;
            else if (ch1 == '-' && ch2 == '*' && ch3 == '*')
                result = num1 - num2 * num3 * num4;
            else if (ch1 == '-' && ch2 == '*' && ch3 == '/')
                result = num1 - num2 * num3 / num4;
            else if (ch1 == '-' && ch2 == '/' && ch3 == '+')
                result = num1 - num2 / num3 + num4;
            else if (ch1 == '-' && ch2 == '/' && ch3 == '-')
                result = num1 - num2 / num3 - num4;
            else if (ch1 == '-' && ch2 == '/' && ch3 == '*')
                result = num1 - num2 / num3 * num4;
            else if (ch1 == '-' && ch2 == '/' && ch3 == '/')
                result = num1 - num2 / num3 / num4;
            else if (ch1 == '*' && ch2 == '+' && ch3 == '+')
                result = num1 * num2 + num3 + num4;
            else if (ch1 == '*' && ch2 == '+' && ch3 == '-')
                result = num1 * num2 + num3 - num4;
            else if (ch1 == '*' && ch2 == '+' && ch3 == '*')
                result = num1 * num2 + num3 * num4;
            else if (ch1 == '*' && ch2 == '+' && ch3 == '/')
                result = num1 * num2 + num3 / num4;
            else if (ch1 == '*' && ch2 == '-' && ch3 == '+')
                result = num1 * num2 - num3 + num4;
            else if (ch1 == '*' && ch2 == '-' && ch3 == '-')
                result = num1 * num2 - num3 - num4;
            else if (ch1 == '*' && ch2 == '-' && ch3 == '*')
                result = num1 * num2 - num3 * num4;
            else if (ch1 == '*' && ch2 == '-' && ch3 == '/')
                result = num1 * num2 - num3 / num4;
            else if (ch1 == '*' && ch2 == '*' && ch3 == '+')
                result = num1 * num2 * num3 + num4;
            else if (ch1 == '*' && ch2 == '*' && ch3 == '-')
                result = num1 * num2 * num3 - num4;
            else if (ch1 == '*' && ch2 == '*' && ch3 == '*')
                result = num1 * num2 * num3 * num4;
            else if (ch1 == '*' && ch2 == '*' && ch3 == '/')
                result = num1 * num2 * num3 / num4;
            else if (ch1 == '*' && ch2 == '/' && ch3 == '+')
                result = num1 * num2 / num3 + num4;
            else if (ch1 == '*' && ch2 == '/' && ch3 == '-')
                result = num1 * num2 / num3 - num4;
            else if (ch1 == '*' && ch2 == '/' && ch3 == '*')
                result = num1 * num2 / num3 * num4;
            else if (ch1 == '*' && ch2 == '/' && ch3 == '/')
                result = num1 * num2 / num3 / num4;
            else if (ch1 == '/' && ch2 == '+' && ch3 == '+')
                result = num1 / num2 + num3 + num4;
            else if (ch1 == '/' && ch2 == '+' && ch3 == '-')
                result = num1 / num2 + num3 - num4;
            else if (ch1 == '/' && ch2 == '+' && ch3 == '*')
                result = num1 / num2 + num3 * num4;
            else if (ch1 == '/' && ch2 == '+' && ch3 == '/')
                result = num1 / num2 + num3 / num4;
            else if (ch1 == '/' && ch2 == '-' && ch3 == '+')
                result = num1 / num2 - num3 + num4;
            else if (ch1 == '/' && ch2 == '-' && ch3 == '-')
                result = num1 / num2 - num3 - num4;
            else if (ch1 == '/' && ch2 == '-' && ch3 == '*')
                result = num1 / num2 - num3 * num4;
            else if (ch1 == '/' && ch2 == '-' && ch3 == '/')
                result = num1 / num2 - num3 / num4;
            else if (ch1 == '/' && ch2 == '*' && ch3 == '+')
                result = num1 / num2 * num3 + num4;
            else if (ch1 == '/' && ch2 == '*' && ch3 == '-')
                result = num1 / num2 * num3 - num4;
            else if (ch1 == '/' && ch2 == '*' && ch3 == '*')
                result = num1 / num2 * num3 * num4;
            else if (ch1 == '/' && ch2 == '*' && ch3 == '/')
                result = num1 / num2 * num3 / num4;
            else if (ch1 == '/' && ch2 == '/' && ch3 == '+')
                result = num1 / num2 / num3 + num4;
            else if (ch1 == '/' && ch2 == '/' && ch3 == '-')
                result = num1 / num2 / num3 - num4;
            else if (ch1 == '/' && ch2 == '/' && ch3 == '*')
                result = num1 / num2 / num3 * num4;
            else if (ch1 == '/' && ch2 == '/' && ch3 == '/')
                result = num1 / num2 / num3 / num4;
            break;
        }

        printf("Enter the Fifth Number: ");
        scanf("%d", &num5);
        printf("Enter the Fifth Operator: ");
        scanf(" %c", &ch5);

        if(ch5 == '='){
            if(ch1 == '+' && ch2 == '+' && ch3 == '+' && ch4 == '+')
                result = num1 + num2 + num3 + num4 + num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '+' && ch4 == '-')
                result = num1 + num2 + num3 + num4 - num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '+' && ch4 == '*')
                result = num1 + num2 + num3 + num4 * num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '+' && ch4 == '/')
                result = num1 + num2 + num3 + num4 / num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '-' && ch4 == '+')
                result = num1 + num2 + num3 - num4 + num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '-' && ch4 == '-')
                result = num1 + num2 + num3 - num4 - num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '-' && ch4 == '*')
                result = num1 + num2 + num3 - num4 * num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '-' && ch4 == '/')
                result = num1 + num2 + num3 - num4 / num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '*' && ch4 == '+')
                result = num1 + num2 + num3 * num4 + num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '*' && ch4 == '-')
                result = num1 + num2 + num3 * num4 - num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '*' && ch4 == '*')
                result = num1 + num2 + num3 * num4 * num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '*' && ch4 == '/')
                result = num1 + num2 + num3 * num4 / num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '/' && ch4 == '+')
                result = num1 + num2 + num3 / num4 + num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '/' && ch4 == '-')
                result = num1 + num2 + num3 / num4 - num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '/' && ch4 == '*')
                result = num1 + num2 + num3 / num4 * num5;
            else if(ch1 == '+' && ch2 == '+' && ch3 == '/' && ch4 == '/')
                result = num1 + num2 + num3 / num4 / num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '+' && ch4 == '+')
                result = num1 + num2 - num3 + num4 + num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '+' && ch4 == '-')
                result = num1 + num2 - num3 + num4 - num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '+' && ch4 == '*')
                result = num1 + num2 - num3 + num4 * num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '+' && ch4 == '/')
                result = num1 + num2 - num3 + num4 / num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '-' && ch4 == '+')
                result = num1 + num2 - num3 - num4 + num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '-' && ch4 == '-')
                result = num1 + num2 - num3 - num4 - num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '-' && ch4 == '*')
                result = num1 + num2 - num3 - num4 * num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '-' && ch4 == '/')
                result = num1 + num2 - num3 - num4 / num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '*' && ch4 == '+')
                result = num1 + num2 - num3 * num4 + num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '*' && ch4 == '-')
                result = num1 + num2 - num3 * num4 - num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '*' && ch4 == '*')
                result = num1 + num2 - num3 * num4 * num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '*' && ch4 == '/')
                result = num1 + num2 - num3 * num4 / num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '/' && ch4 == '+')
                result = num1 + num2 - num3 / num4 + num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '/' && ch4 == '-')
                result = num1 + num2 - num3 / num4 - num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '/' && ch4 == '*')
                result = num1 + num2 - num3 / num4 * num5;
            else if(ch1 == '+' && ch2 == '-' && ch3 == '/' && ch4 == '/')
                result = num1 + num2 - num3 / num4 / num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '+' && ch4 == '+')
                result = num1 + num2 * num3 + num4 + num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '+' && ch4 == '-')
                result = num1 + num2 * num3 + num4 - num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '+' && ch4 == '*')
                result = num1 + num2 * num3 + num4 * num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '+' && ch4 == '/')
                result = num1 + num2 * num3 + num4 / num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '-' && ch4 == '+')
                result = num1 + num2 * num3 - num4 + num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '-' && ch4 == '-')
                result = num1 + num2 * num3 - num4 - num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '-' && ch4 == '*')
                result = num1 + num2 * num3 - num4 * num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '-' && ch4 == '/')
                result = num1 + num2 * num3 - num4 / num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '*' && ch4 == '+')
                result = num1 + num2 * num3 * num4 + num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '*' && ch4 == '-')
                result = num1 + num2 * num3 * num4 - num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '*' && ch4 == '*')
                result = num1 + num2 * num3 * num4 * num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '*' && ch4 == '/')
                result = num1 + num2 * num3 * num4 / num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '/' && ch4 == '+')
                result = num1 + num2 * num3 / num4 + num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '/' && ch4 == '-')
                result = num1 + num2 * num3 / num4 - num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '/' && ch4 == '*')
                result = num1 + num2 * num3 / num4 * num5;
            else if(ch1 == '+' && ch2 == '*' && ch3 == '/' && ch4 == '/')
                result = num1 + num2 * num3 / num4 / num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '+' && ch4 == '+')
                result = num1 + num2 / num3 + num4 + num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '+' && ch4 == '-')
                result = num1 + num2 / num3 + num4 - num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '+' && ch4 == '*')
                result = num1 + num2 / num3 + num4 * num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '+' && ch4 == '/')
                result = num1 + num2 / num3 + num4 / num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '-' && ch4 == '+')
                result = num1 + num2 / num3 - num4 + num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '-' && ch4 == '-')
                result = num1 + num2 / num3 - num4 - num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '-' && ch4 == '*')
                result = num1 + num2 / num3 - num4 * num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '-' && ch4 == '/')
                result = num1 + num2 / num3 - num4 / num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '*' && ch4 == '+')
                result = num1 + num2 / num3 * num4 + num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '*' && ch4 == '-')
                result = num1 + num2 / num3 * num4 - num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '*' && ch4 == '*')
                result = num1 + num2 / num3 * num4 * num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '*' && ch4 == '/')
                result = num1 + num2 / num3 * num4 / num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '/' && ch4 == '+')
                result = num1 + num2 / num3 / num4 + num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '/' && ch4 == '-')
                result = num1 + num2 / num3 / num4 - num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '/' && ch4 == '*')
                result = num1 + num2 / num3 / num4 * num5;
            else if(ch1 == '+' && ch2 == '/' && ch3 == '/' && ch4 == '/')
                result = num1 + num2 / num3 / num4 / num5;
            else if(ch1 == '-' && ch2 == '+' && ch3 == '+' && ch4 == '+')
                result = num1 - num2 + num3 + num4 + num5;
            else if(ch1 == '-' && ch2 == '+' && ch3 == '+' && ch4 == '-')
                result = num1 - num2 + num3 + num4 - num5;
            
        }

        printf("Enter the Sixth Number: ");
        scanf("%d", &num6);
        printf("Enter the Sixth Operator: ");
        scanf(" %c", &ch6);

        printf("Enter the Seventh Number: ");
        scanf("%d", &num7);
        printf("Enter the Seventh Operator: ");
        scanf(" %c", &ch7);

        printf("Enter the Eighth Number: ");
        scanf("%d", &num8);
        printf("Enter the Eighth Operator: ");
        scanf(" %c", &ch8);

        printf("Enter the Ninth Number: ");
        scanf("%d", &num9);
        printf("Enter the Ninth Operator: ");
        scanf(" %c", &ch9);

        printf("Enter the Tenth Number: ");
        scanf("%d", &num10);
    }
}

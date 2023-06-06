#include <stdio.h>

int main()
{

    char expression[200];
    int count = 0, num, result;
    char op;

    printf("Enter an arithmetic expression (e.g., 2 + 3 + 8 - 3 * 5 - 2 + 7 = ): ");

    // Read the expression into the char array
    while ((expression[count] = getchar()) != '=')
        count++;

    // Initialize variables
    count = 0; // reset the count to reuse
    num = 0;
    result = 0;
    op = '+';

    // Evaluate the expression
    while (expression[count] != '=')
    {
        if (expression[count] >= '0' && expression[count] <= '9')
            num = num * 10 + (expression[count] - '0');
        
        else if (expression[count] == '+' || expression[count] == '-' || expression[count] == '*' || expression[count] == '/')
        {
            switch (op)
            {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                result /= num;
                break;
            }

            num = 0;
            op = expression[count];
        }
        count++;
    }

    // Handle the last operand and operator

    switch (op)
    {
    case '+':
        result += num;
        break;
    case '-':
        result -= num;
        break;
    case '*':
        result *= num;
        break;
    case '/':
        result /= num;
        break;
    }

    // Display the result
    printf("Result: %d\n", result);

    return 0;
}


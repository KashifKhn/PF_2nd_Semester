#include <stdio.h>

int stringLength(char str[] )
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    puts(str);
    printf("Length of the string is %d", stringLength(str));
    return 0;
}
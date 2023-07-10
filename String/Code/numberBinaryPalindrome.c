#include <stdio.h>
void CheckPalindrome(int binaryNum, int number);
void binary(int number);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    binary(number);
    return 0;
}

void binary(int number)
{
    int temp = number;
    int binary = 0, i = 1;
    while (number != 0)
    {
        binary += (number % 2) * i;
        number /= 2;
        i *= 10;
    }
    CheckPalindrome(binary, temp);
}

void CheckPalindrome(int binaryNum, int number)
{
    int rev = 0, temp = binaryNum;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == binaryNum)
        printf("The binary of %d is %d which is Palindrome", number, binaryNum);
    else
        printf("The binary of %d is %d which is Not Palindrome", number, binaryNum);
}


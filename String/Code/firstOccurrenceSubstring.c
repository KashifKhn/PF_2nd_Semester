#include <stdio.h>

int strLen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
        return i;
}

int findSubStringIndex(char str[], char subStr[])
{
    int strLength = strLen(str);
    int subStrLength = strLen(subStr);
    for (int i = 0; i < strLength; i++)
    {
        if (str[i] == subStr[0])
        {
            int j;
            for (j = 0; j < subStrLength; j++)
            {
                if (str[i + j] != subStr[j])
                    break;
            }
            if (j == subStrLength)
                return i;
        }
    }
    return -1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    char subStr[100];
    printf("Enter a substring: ");
    scanf(" %[^\n]s", subStr);
    printf("String is: %s\n", str);
    printf("Substring is: %s\n", subStr);
    int index = findSubStringIndex(str, subStr);
    if (index == -1)
        printf("Substring not found\n");
    else
        printf("Substring found at index %d\n", index);

}
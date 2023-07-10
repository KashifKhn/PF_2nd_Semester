#include <stdio.h>

void printArray(int arr[], int size);
void findSubStringIndex(char str[], char subStr[]);
int strLen(char str[]);

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
    findSubStringIndex(str, subStr);
    return 0;
}

int strLen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
        return i;
}

void findSubStringIndex(char str[], char subStr[])
{
    int strLength = strLen(str);
    int subStrLength = strLen(subStr);
    int index[subStrLength];
    int count = 0;
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
            {
                index[count] = i;
                count++;
            }
                
        }
    }
    if (count != 0)
        printArray(index, count);
    else
        printf("Substring not found\n");
      
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}


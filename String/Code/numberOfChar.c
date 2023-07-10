#include <stdio.h>
#include <stdbool.h>

void findFrequencyOfChar(char str[])
{
    bool checkedChar[256] = {false};  
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (checkedChar[str[i]])
            continue;
        int frequency = 0;
        for (int j = i; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                frequency++;
                checkedChar[str[i]] = true;  
            }
        }
        printf("Frequency of %c is %d\n", str[i], frequency);
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    printf("String is : %s\n", str);
    findFrequencyOfChar(str);
    return 0;
}

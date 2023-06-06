#include <stdio.h>

int main()
{
    // Print all possible combinations of 1, 2, 3
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("%d%d%d, ",i, j, k);
            }
        }
    }
}
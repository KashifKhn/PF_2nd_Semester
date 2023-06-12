#include <stdio.h>

int main()
{
    int count = 0;
    int number, dpos = 0, d1pos = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    int tempNum = number;
    while (tempNum > 0)
    {
        dpos++;
        int d = tempNum % 10;
        tempNum /= 10;
        int occ = 0;
        int temp = number;
        int d1pos = 0;
        while (temp > 0)
        {
            d1pos++;
            int d1 = temp % 10;
            temp /= 10;
            if (d == d1)
            {
                if (dpos > d1pos)
                    break;
                occ++;
            }
        }
        if (occ > 0)
            printf("%d occurs %d times\n", d, occ);
    }
}
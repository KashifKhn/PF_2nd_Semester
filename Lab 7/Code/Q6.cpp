#include <stdio.h>

int main()
{
    int number;
    printf("Please Enter the Number: ");
    scanf("%d",&number);
    int count = 0;
    int tempNum = number;
    for(int digit=0; digit<=9; digit++)
    {
        while (number != 0)
        {
            int rem = number % 10;
            if(digit==rem)
                count++;
            number /= 10;
        }
        if(count != 0)
            printf("%d = %d times.\n",digit,count);
        number = tempNum;
        count = 0;
    }
}
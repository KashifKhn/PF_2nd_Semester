#include <stdio.h>

int main()
{
    int sum=0, count = 1;

    while (count <= 100)
    {  
        if(count % 7 == 0)
            sum += count;
        count++;
    }
    printf("The sum of all multiples of 7 from 1 to 100 is = %d ",sum);
    
}
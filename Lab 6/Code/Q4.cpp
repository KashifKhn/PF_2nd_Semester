#include <stdio.h>
#include<math.h>

int main()
{
    int num, binary = 0;
    printf("Please Enter the Decimal Number to convert to Binary Number: ");
    scanf("%d",&num);
    // sotre the orignal number
    int tempNum = num;
    int power = 0;
    
    while (num > 0)
    {
        int remainder = num % 2;
        binary +=  remainder * (pow(10,power));
        num /= 2;
        power++;
    }
    printf("The Binary of %d is = %d", tempNum, binary);   
}

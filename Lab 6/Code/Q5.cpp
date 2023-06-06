#include <stdio.h>
#include<math.h>

int main()
{
    int num, decimal = 0;
    printf("Please Enter the Binary Number to Convert to Decimal Number : ");
    scanf("%d",&num);
    // sotre the orignal number
    int tempNum = num;
    int power = 0;
    
    while (num > 0)
    {
        int remainder = num % 10;
        decimal +=  remainder * (pow(2,power));
        num /= 10;
        power++;
    }
    printf("The decimal of %d is = %d", tempNum, decimal);
}

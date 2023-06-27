#include <stdio.h>

int findBinary(int decimalNum)
{
    if(decimalNum == 0)
        return 0;
    else
        return (decimalNum % 10 + 2 * findBinary(decimalNum / 10));
}

int  main()
{
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Binary equivalent of %d is %d", decimalNum, findBinary(decimalNum));
}
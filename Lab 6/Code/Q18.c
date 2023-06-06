#include <stdio.h>
int main()
{
    int number, tempNumber, strongNumber = 0;
    printf("Please Enter the Number: ");
    scanf("%d",&number);
    tempNumber = number;

    while(number != 0)
    {
        int fact = 1;
        int remindar = number % 10;
        // find factorial of the obtained reminder which is the last digit of the number
        for(int i= remindar; i>=1; i--)
            fact *= i;
            
        strongNumber += fact;
        number /= 10;
    }

    if(tempNumber == strongNumber)
        printf("%d is Strong Number\n",tempNumber);
    else
        printf("%d is Not Strong Number\n",tempNumber);

}

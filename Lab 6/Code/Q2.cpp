#include <stdio.h>
int main()
{
    // for range
    int rangeStart, rangeEnd;
    printf("PleaseEnter the Strating number form which you want to print prime Number : ");
    scanf("%d",&rangeStart);
    printf("Please Enter the Ending number upto which you want to print prime Number : ");
    scanf("%d",&rangeEnd);
    // when user enter the smaller number In start and large in End
    if(rangeStart > rangeEnd){
        printf("Please Enter the larger Ending number, Ending Number must be greater than Strating Number : ");
        scanf("%d",&rangeEnd);
    }
    // for prime number
    int num, isPrime;
    while (rangeStart<=rangeEnd)
    {
        // Initializing a isPrime with zero to checke prime
        isPrime = 0;
        // checke one by one number so num is rangeStart and it increment with iteration
        num = rangeStart;
        for (int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                isPrime++;
                break;
            }
        }
        if(isPrime == 0)
            printf("%d\t",num);

        rangeStart++;
    }    
}
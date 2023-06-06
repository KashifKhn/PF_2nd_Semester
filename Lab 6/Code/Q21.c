#include <stdio.h>
int main()
{
    int number1, number2, greater, lcm = 1;
    printf("Please Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Please Enter Number 2 : ");
    scanf("%d",&number2);
    // sotre for later use
    int tempNum1, tempNum2;
    tempNum1 = number1;
    tempNum2 = number2;
    //
    while(number1 != 1 || number2 != 1)
    {
        // find the greater number and store it in greater variable
        greater = number1 > number2 ? number1 : number2;
        // iterate from 2 to greater number
        for(int i=2; i<= greater; i++){
            // check if i is divisible by both or number1 or number2
            if(number1 % i == 0 || number2 % i == 0){
                lcm *= i;
                // if number1 is divisible by i then divide it by i
                if(number1 % i == 0)
                    number1 /= i;
                // if number2 is divisible by i then divide it by i
                if(number2 % i == 0)
                    number2 /= i;
            }
        }
    }
    printf("The LCM of %d and %d is %d",tempNum1, tempNum2, lcm);

}
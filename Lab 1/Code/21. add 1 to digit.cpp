/* If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example, if the number that is input is 12381 then the output should be displayed as 23492. */


#include <stdio.h>

int main()
{
    int number, digit, revers, result = 0, tempNum;
    printf("Enter your Number = ");
    scanf("%d",&number);

    // stor the orginial Number 
    tempNum = number;
    
    // for revers the Number
    while(number != 0){
        digit = number % 10;
        revers = (revers*10) + digit;
        number /= 10;
    }
	   
    // store the revesr number 
    number = revers;

    // for adding 1 to each digit 
    while(number != 0){
        digit = number % 10;
        result = (result*10) + digit+1;
        number /= 10;
    }

    printf("The Number before adding %d is and After adding 1 is %d ", tempNum,result);
}

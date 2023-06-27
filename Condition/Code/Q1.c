/*  Write a program to enter a number and display whether its even or odd using conditional operator.*/

#include <stdio.h>

int main(){
    int number;

    //prompt to user
    printf("Please Enter Number :   ");
    // store 
    scanf("%d",&number);

    // using Conditional or Ternary operator

    //  chechk              if true this                if  false
    (number % 2 == 0 )? printf("Number is Even\n") : printf("Number is Odd\n");

    // using if-else

    // if(number % 2 == 0)
    //     printf("Number is Even\n");
    // else 
    //     printf("Number is Odd\n");

    

}
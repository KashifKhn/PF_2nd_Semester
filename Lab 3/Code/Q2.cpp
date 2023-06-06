/*  Write a program to enter 2 numbers and print the larger in them using conditional operator. */

#include <stdio.h>

int main(){
    int number1, number2;

    //prompt to user
    printf("Please Enter Number 1 :   ");
    // store Number 1
    scanf("%d",&number1);
     //prompt to user
    printf("Please Enter Number 2 :   ");
    // store Number 1
    scanf("%d",&number2);

    // using Conditional or Ternary operator

    //  chechk                  if true this                  if  false
    (number1 > number2 ) ? printf("Number 1 is Larger\n") : printf("Number 2 is Larger\n");

    // using if-else Conditoion
    // if(number2 < number1)
    //     printf("Number 1 is Larger\n");
    // else
    //     printf("Number 2 is Larger\n");
        
}
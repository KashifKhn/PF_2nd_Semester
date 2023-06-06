/* Write a C program to check whether a character is an alphabet, digit or special character. (Use Ascii value)  */

#include <stdio.h>

int main()
{
    char toChechk;
    printf("Please Enter Your Character :  ");
    scanf("%c",&toChechk);
    if(toChechk>=65 && toChechk<=90 || toChechk>=97 && toChechk<=122 )
        printf("Alphabet");
    else if(toChechk>= 48 && toChechk<= 57)
        printf("Digit");
    else 
        printf("Special Character ");
 
}
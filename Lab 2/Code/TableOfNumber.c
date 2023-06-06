/* Write a program to display the multiplication table for a given integer.  */

#include <stdio.h>

int main()
{
    int number ;
    printf("Enter the Number you want to see the table   ");
    scanf("%d",&number);

    for (int i = 0; i <=10 ; i++)
    {

        printf("%d * %d = %d \n",number,i,number*i);
    }
    
}
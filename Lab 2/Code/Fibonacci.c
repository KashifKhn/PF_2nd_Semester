/* Write a program to display the first n terms of the Fibonacci series.  */

#include <stdio.h>

void printFib(int a,int b, int number);

int main()
{
    int a = 0;
    int b = 1;
    int number ;
    printf("Enter the Number ");
    scanf("%d",&number);
    printf("%d\t%d\t",a,b);
    printFib(a,b,number-2);

}
void printFib(int a, int b, int number){
    if(number==0)
        return;
    
    int c = a + b;
    printf("%d\t",c);
    printFib(b,c,number-1);
}

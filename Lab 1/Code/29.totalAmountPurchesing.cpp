/* A customer in a store is purchasing five items. Write a program that asks for the price of each item, and then displays the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent.  */

#include <stdio.h>

int main()
{
    float item1, item2, item3, item4, item5, item6, subTotal;
    float amountOfSaleTax, totalAmount;
    printf("Enter the Price of item 1 =   ");
    scanf("%f", &item1);

    printf("Enter the Price of item 2 =   ");
    scanf("%f", &item2);

    printf("Enter the Price of item 3 =   ");
    scanf("%f", &item3);

    printf("Enter the Price of item 4 =   ");
    scanf("%f", &item4);

    printf("Enter the Price of item 5 =   ");
    scanf("%f", &item5);

    subTotal = item1 + item2 + item3 + item4 + item5;

    amountOfSaleTax = 7.0 /100.0  * subTotal;

    totalAmount = subTotal + amountOfSaleTax;

    printf("The Subtotal without tax is  %f \n", subTotal);

    printf("The saletax is  %f \n", amountOfSaleTax);
    
    printf("The total amount with the tax is  %f  \n", totalAmount);
    
}
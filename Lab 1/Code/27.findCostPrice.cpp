/* If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a program to find the cost price of one item   */

#include <stdio.h>

int main()
{
    float totalSellingPrice, totalProfitEarned, costPriceOfOne;
    printf("Enter The total Selling Price of 15 item  =  ");
    scanf("%f",&totalSellingPrice);
    printf("Enter The total profit earn of 15 item  =  ");
    scanf("%f",&totalProfitEarned);
    
    costPriceOfOne = (totalSellingPrice /15.0) + (totalProfitEarned/15);

    printf("\n\nThe cost price of One item is %f =  ",costPriceOfOne);
}

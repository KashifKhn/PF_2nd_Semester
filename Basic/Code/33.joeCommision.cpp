/*  Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:
• The number of shares that Joe purchased was 2,000.
• When Joe purchased the stock, he paid $40.00 per share.
• Joe paid his stockbroker a commission that amounted to 3 percent of the amount he paid for the stock.
Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 2,000.
• He sold the stock for $42.75 per share.
• He paid his stockbroker another commission that amounted to 3 percent of the amount he received for the stock.
Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of money that Joe had left when he sold the stock and paid his broker (both times).   */

#include <stdio.h>

int main()
{
    int numberOfSharePurchased = 2000;
    float rateOfSharePurchased = 40;

    int numberOfShareSold = 2000;
    float rateOfShareSold = 40.75;

    float amountPaidForPurchased = numberOfSharePurchased * rateOfSharePurchased;

    float commissionPaidForBought = amountPaidForPurchased * 0.03;

    float amountGetformSold  = numberOfShareSold * rateOfShareSold;

    float commissionPaidForSold = amountGetformSold * 0.03;


    float moneyLeft = amountGetformSold - commissionPaidForSold - commissionPaidForBought;

    printf("The amount he total paid for the Share %.2f \n", amountPaidForPurchased);

    printf("The commission he paid for when buy the stock is %.2f \n", commissionPaidForBought);

    printf("The amount he total get form sell the stock is %.2f \n", amountGetformSold);

    printf("The comission he paid for when sell the stock is %.2f \n", commissionPaidForSold);

    printf("The money left  when he paid both commission  is %.2f \n",moneyLeft);


}

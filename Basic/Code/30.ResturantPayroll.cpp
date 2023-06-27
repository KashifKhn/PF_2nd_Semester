/* Write a program that calculates the total amount of a meal purchased at a restaurant. The program should ask the user to enter the charge for the food, and then calculate the amount of a 18 percent tip and 7 percent sales tax. Display each of these amounts and the total. */

#include <stdio.h>

int main()
{
    float totalAmountOfMeal, chargeForFood, amountOfTips, amountOfSaleTax;
    printf("Enter the Charges for Food  =  ");
    scanf("%f", &chargeForFood);

    amountOfTips = chargeForFood * (18.0/100.0);

    amountOfSaleTax = chargeForFood * (7.0/100.0);

    totalAmountOfMeal = chargeForFood + amountOfTips + amountOfSaleTax;

    printf("The charge for food without tips and sale tax is  %f  \n", chargeForFood);
    
    printf("The charge of sale tax is %f \n",amountOfSaleTax);

    printf("The charge for tips for 18percent is  %f  \n",amountOfTips);

    printf("The total Amount of meal with tips and taxes is  %f \n " , totalAmountOfMeal);


}

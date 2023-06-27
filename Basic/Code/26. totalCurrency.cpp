/*  A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.  */

#include <stdio.h>

int main()
{
    int amoutInHunderd, notesOfHunderd, notesOfFifty, notesOfTen, remaming;
    printf("Enter the amount in Hunders  =   ");
    scanf("%d",&amoutInHunderd);

    notesOfHunderd = amoutInHunderd /100;
    remaming = amoutInHunderd % 100;

    notesOfFifty = remaming / 50 ;
    remaming = remaming % 50;

    notesOfTen = remaming / 10 ;

    printf("The cashier will give %d Hunderd Ruppes Note \n",notesOfHunderd);
    printf("The cashier will give %d Fifty Ruppes Note \n",notesOfFifty);
    printf("The cashier will give %d Ten Ruppes Note \n",notesOfTen);
}
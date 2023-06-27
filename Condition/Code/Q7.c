/*  Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow
Unit
Charge/unit
upto 199 @1.20
200 and above but less than 400  @1.50
400 and above but less than 600  @1.80
600 and above  @2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-  */

#include <stdio.h>

int main()
{
    float electricity_bill, unit;
    char name[20];
    int id;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your id: ");
    scanf("%d", &id);
    printf("Enter the unit: ");
    scanf("%f", &unit);
    if (unit <= 199)
    {
        electricity_bill = unit * 1.20;
    }
    else if (unit >= 200 && unit < 400)
    {
        electricity_bill = unit * 1.50;
    }
    else if (unit >= 400 && unit < 600)
    {
        electricity_bill = unit * 1.80;
    }
    else if (unit >= 600)
    {
        electricity_bill = unit * 2.00;
    }
    if (electricity_bill > 400)
    {
        electricity_bill = electricity_bill + (electricity_bill * 0.15);
    }
    else if (electricity_bill < 100)
    {
        electricity_bill = 100;
    }
    printf("Your name is %s and your id is %d and your electricity bill is %f", name, id, electricity_bill);

    return 0;

    
    
}
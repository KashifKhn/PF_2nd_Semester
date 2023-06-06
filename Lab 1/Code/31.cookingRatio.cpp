/* A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make, and then displays the number of
cups of each ingredient needed for the specified number of cookies.  */

#include <stdio.h>

int main()
{
    float sugarRatio, sugar,  butterRatio, butter, flourRatio, flour;
    int cookies;
    
    printf("Enter How many many cookies you want to make  =   ");
    scanf("%d",&cookies);

    // these amount are given in the question

    sugarRatio = 1.5/48.0;

    butterRatio = 1.0 / 48.0;

    flourRatio = 2.75 / 48.0;

    sugar = sugarRatio * cookies ;
    butter = butterRatio * cookies ;
    flour = flourRatio * cookies ;


    printf("For %d cookies you Need the Following Ingredient \n\n");

    printf("You want %f cup of Sugar  \n", sugar);
    printf("You want %f cup of Butter  \n", butter);
    printf("You want %f cup of Flour  \n", flour);


}

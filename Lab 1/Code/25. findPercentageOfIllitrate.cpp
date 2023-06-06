/* In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80,000. */
#include <stdio.h>

int main()
{
    int totalTwoPopulation = 80000;
    int totalLiteracyPercentage = 48;
    int literacyManPercentage = 35;
    // total percent is 100% so 48 is literacy so 52 is illiteracy percentage
    int totalIlliteracyPercentage = 52;
    int totalIlliteracyPopulation = 52/100.0 * 80000;
    printf("The total illiterate men and women in the town is %d ", totalIlliteracyPopulation);

    return 0;
}
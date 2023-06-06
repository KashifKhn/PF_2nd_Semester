#include<stdio.h>

int main(){
    int sideA, sideB, sideC;
    int lowerLimit, upperLimit;
    printf("Enter the starting number: ");
    scanf("%d",&lowerLimit);
    printf("Enter the Ending number: ");
    scanf("%d",&upperLimit);
    // Check if the starting number is greater than ending number
    if(lowerLimit > upperLimit)
    {
        printf("Please Enter the Ending number again Ending Number Must be Greater than Starting: ");
        scanf("%d",&upperLimit);
    }
    // For loop for side A
    for(sideA=lowerLimit; sideA * sideA<= upperLimit; sideA++)
    {
        //  For loop for side B
        for(sideB=lowerLimit; sideB * sideB <= upperLimit; sideB++)
        {
            // For loop for side C
            for(sideC= lowerLimit; sideC * sideC <= upperLimit; sideC++)
            {
                // Check if the sum of square of side A and side B is equal to square of side C
                if(sideA * sideA + sideB * sideB == sideC * sideC)
                {
                    printf("Side A %d + Side B %d = Side C %d\n",sideA, sideB, sideC);
                }
            }
        }
    }
}
/* Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The percentage of males can be calculated as 8 / 20 = 0.4, or 40%. The percentage of females can be calculated as 12 / 20 = 0.6, or 60%.  */

#include <stdio.h>

int main()
{
    int maleStudents, femaleStudents, totalStudents;
    float percentageOfMaleStudents, percentageOfFemaleStudents;
    
    printf("Enter The male students Registered in class  =  ");
    scanf("%d",&maleStudents);
    printf("Enter The female students Registered in class  =  ");
    scanf("%d",&femaleStudents);

    totalStudents = maleStudents + femaleStudents;

    percentageOfMaleStudents = (maleStudents * 100)/totalStudents;
    percentageOfFemaleStudents = (femaleStudents * 100)/totalStudents;

    printf("The percentage of Male Student in class is  %.2f%% \n",percentageOfMaleStudents);
    printf("The percentage of Female Student in class is  %.2f%% \n",percentageOfFemaleStudents);






}

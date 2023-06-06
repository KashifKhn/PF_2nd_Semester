/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees. (Formula: C = (F-32) * 5/9)*/

#include <stdio.h>

main()
{
	printf("\t\t Fahrenheit to Centigrade degree \n\n\n\n");
	float fahrenheit, centigrade;
	printf("Enter Your temperature in Fahrenheit =  ");
	scanf("%f",&fahrenheit);
	centigrade = (fahrenheit-32) * (5.0/9.0);
	printf("%f  Fahrenheit in Celsius is  %f ",fahrenheit,centigrade);
}



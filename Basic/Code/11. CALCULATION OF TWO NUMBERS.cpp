#include <iostream>
using namespace std;

int main ()
{
	cout << "\t CALCULATION OF TWO NUMBERS\n\n\n\n";
	float num1 , num2, sum, sub, multi,divi ;
	cout << "Enter first number = ";
	cin >> num1;
    cout << "Enter second number = ";
	cin >> num2;
	
	sum =num1 + num2;
	cout << "\n\nSum = "<< sum;
	
	sub =num1 - num2;
	cout << "\n\nSubtraction = "<< sub;
	
	multi=num1 * num2;
	cout << "\n\nMultiplication = "<< multi;
	
	divi= num1 / num2;
	cout<< "\n\nDivision = " << divi;
	
	


	return 0;
}


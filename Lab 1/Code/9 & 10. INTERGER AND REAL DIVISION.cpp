#include <iostream>
using namespace std;

int main ()
{
	cout << "\t INTERGER DIVISION \n\n\n\n";
	int num1,num2,ans1;
	cout << "Enter first number for integer division = " ;
	cin >> num1;
	cout << "Enter second number for integer division = " ;
	cin >> num2;
	ans1=num1/num2;
	cout << "\n\nInteger division = " << ans1<< endl;
    
    cout << "\n\n\n\n\t REAL DIVISION \n\n\n\n";
	float num3,num4,ans2;
	cout << "Enter third number for Real Division = " ;
	cin >> num3;
	cout << "Enter forth number for Real Division = " ;
	cin >> num4;
	ans2=num3/num4;
	cout << "\n\nReal division= " << ans2 << endl;



	return 0;
}


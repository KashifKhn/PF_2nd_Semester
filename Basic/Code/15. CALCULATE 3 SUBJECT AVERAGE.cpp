#include <iostream>
using namespace std;

int main ()
{
	cout << "\t CALCULATE 3 SUBJECT AVERAGE. \n\n\n\n";
	int sub1, sub2, sub3, avg;
	cout << "Enter first subject marks = ";
	cin >> sub1; 
	 
	cout << "\nEnter second subject marks = ";
	cin >> sub2;

    cout << "\nEnter third subject marks = ";
	cin >> sub1;
	
	avg = (sub1+sub2+sub3)/3;
	cout << "\nAverage Marks are = " << avg << endl;
	
	return 0;
}


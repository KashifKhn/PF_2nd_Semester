#include <iostream>
using namespace std;

int main ()
{
	cout << "\t CALCULATE PERCENTAGE. \n\n\n\n";
	float total_marks, obtaind_marks, percentage;
	cout << "Enter obtained marks = ";
	cin >> obtaind_marks;
	
	cout << "\nEnter total marks = ";
	cin >> total_marks;
	
    percentage = obtaind_marks*100/total_marks;
    cout << "\nPercentage =" << percentage << endl;

	return 0;
}


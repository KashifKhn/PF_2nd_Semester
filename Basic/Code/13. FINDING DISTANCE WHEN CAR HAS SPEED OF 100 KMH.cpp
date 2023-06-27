#include <iostream>
using namespace std;

int main ()
{
	cout << "\t FINDING DISTANCE WHEN CAR HAS SPEED OF 100 KM/H \n\n\n\n";
	float hours, distance;
	
	cout << "Enter hours from 1 to 10 you travel =";
	cin >> hours ;
	
	if (hours < 1 || hours > 10)
	{
		cout << "\nERROR... Try Again";
	}
	else
	{
		distance = 100 * 1000 * hours;
	    cout << "\nYou traveled = " << distance << " meter"<< endl;
    }
	return 0;
}


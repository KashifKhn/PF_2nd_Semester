#include <iostream>
using namespace std;

int main ()
{
	cout << "\t CALCULATE HOW MUSH TRIPS CAN BE MADE. \n\n\n\n";
	int e_Tag_balance,trips;
	cout << "Enter the remaining balance in your Motorway e-Tag card =";
	cin >> e_Tag_balance;
	trips = e_Tag_balance/45;
	cout << "\n\nYou can make '" << trips <<"' trips on moterway in your remaining balance "<< e_Tag_balance << endl ;          


	return 0;
}


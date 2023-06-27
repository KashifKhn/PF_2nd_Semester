#include <iostream>
using namespace std;

int main ()
{
	cout << "\t CALCULATING HOW MUCH MONEY YOU HAVE\n\n\n";
	int coin1, coin2, coin5, note10, note20, note50, total;
	cout<< "\nEnter one's rupee coins = ";
	cin>> coin1;
    
    cout<< "\nEnter two's rupee coins = ";
	cin>> coin2;
    
    cout<< "\nEnter five's rupee coins = ";
	cin>> coin5;

    cout<< "\nEnter ten's rupee note = ";
	cin>> note10;
	
	cout<< "\nEnter twenty's rupee note = ";
	cin>> note10;
	
	cout<< "\nEnter fifty's rupee note = ";
	cin>> note10;
	
	total=coin1 + (coin2*2) + (coin5*5) + (note10*10) + (note20*20) + (note50*50);
	
	cout << "\n\nYou have total " << total << " rupees";

	return 0;
}


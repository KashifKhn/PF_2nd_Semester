#include <iostream>
using namespace std;

int main ()
{
	cout << "\tFINDING    f(x) = |x^3 - 20|,  WHEN f(-3)  \n\n\n";  
	int value_x, absalute, ans ;
	cout << "Enter value of 'X' =  ";
	cin >> value_x;
	ans = value_x * value_x * value_x - 20;
	if (ans < 0)
	{
		absalute = ans * (-1);
		cout << "\nAns = "<< absalute << endl;
	}
    else 
    {
    	cout << "\nAns = " << ans << endl;
	}

	return 0;
}


#include <iostream>
using namespace std;

int main ()
{
	cout << "\t FIND AREA OF RECTANGLE \n\n\n";
	int lenght, width, area;
	
	cout << "Enter lenght of rectangle = ";
	cin >> lenght ;
	
	cout << "\nEnter width of rectangle = ";
	cin >> width ;
	
	area = lenght * width ;
	cout << "\nArea of rectangle =  " << area << endl;
	


	return 0;
}


#include <iostream>
using namespace std;

int main() 
{
	int temp;
	int celsius;
	int	fahrenheit;
	int choice;

	cout << "What conversion would you like to do?\n" << endl;
	cout << "1. Convert C to F" << endl;
	cout << "2. Convert F to C" << endl;
	cin >> choice;

	if (choice==1) //Convert from C to F: C * 1.8 + 32 = F
	{
		cout << "What temperature would you like to convert?\n" << endl;
		cin >> temp;

		fahrenheit = (temp * 9 / 5 + 32);

		cout << temp << " degrees celsius is " << fahrenheit << " degrees fahrenheit.\n" << endl;
		
	}
	else if (choice==2) //Convert from F to C: (F-32) / 1.8 = C
	{
		cout << "What temperature would you like to convert?\n" << endl;
		cin >> temp;

		celsius = ((temp - 32) * 5 / 9);

		cout << temp << " degrees fahrenheit is " << celsius << " degrees celsius.\n" << endl;
	}
	else //In case user does not enter a choice of 1 or 2
	{
		cout << "Please choose either option 1 or 2" << endl;
	}


	system("pause");
	return 0;
}
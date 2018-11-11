
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int rows = -1;
	int counter = -1;
	for (int k = 1; k <= number; k += 2)
	{
		counter++;
	}
	for (int i = 1; i <= number; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int row = 1; row <= counter; row++)
	{
		for (int t = 1; t <= row; t++)
		{
			cout << " ";
		}
		cout << "*";
		for (int p = 1; p <= number - (2 + 2 * row); p++)
		{
			cout << " ";
		}
		if (row != counter) cout << "*" << endl;
		rows++;
	}
	cout << endl;
	int spaces = rows;
	for (int p = 1; p <= rows; p++)
	{
		for (int t = 1; t <= spaces; t++)
		{
			cout << " ";
		}
		cout << "*";
		for (int f = 1; f <= number - (2 + 2 * spaces); f++)
		{
			cout << " ";
		}
		cout << "*" << endl;
		spaces--;
	}
	for (int i = 1; i <= number; i++)
	{
		cout << "*";
	}
	cout << endl;
    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m;
	int counter = 0;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	for (int i = n; i <= m; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
                sum += j;
		}
		bool flag = true;
		int j = 1;
		for (int p = 2; p <= sqrt(sum); p++)
		{
			if (sum % p == 0)
                j++;
		}
		if (j != 1)
            flag = false;
		if (flag)
		 counter++;
	}
	cout << counter << endl;


    return 0;
}

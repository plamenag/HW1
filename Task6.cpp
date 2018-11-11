#include <iostream>

using namespace std;

int main()
{
    int numbers,sum=0,counter=1;
    cout << "Enter two-digit numbers:" << endl;
    cin >> numbers;
    if ( numbers >= 10 && numbers <=99 )
    {
        while ( counter < 5 || sum < 234 )
        {
            cin >> numbers;
            sum += numbers;
            counter++;
        }

    cout << "Sum =" << sum << endl;
    cout << "Total two-digits=" << counter;
    }

    return 0;
}



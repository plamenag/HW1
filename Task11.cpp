#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,counter=0;
    cout<< "Enter numbers:" <<endl;
    cin >> n;
    while (n >= 0)
    {
        sum += n;
        counter++;

        cin >> n;
    }
    cout<<"Total positive numbers ="<<counter;
    cout<<" The sum of positive numbers="<<sum;
    cout<<" The average sum ="<<sum/counter;

    return 0;
}

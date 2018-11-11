#include <iostream>
using namespace std;

int main()
{
    int number,counter = 1;
    cout<<"Enter number:";
    cin>>number;
    while((number/=10) > 0)
    {
       counter++;
    }
    cout<<"Digits="<<counter;
    return 0;
}

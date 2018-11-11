#include <iostream>
using namespace std;

int main()
{
    int metres;
    cout<<"Enter metres:";
    cin>>metres;
    int days;
    while( metres >= 10 && metres < 101 )
    {
        days = metres -1 ;
            cout << days;
            break;
    }
    return 0;
}

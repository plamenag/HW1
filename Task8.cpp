#include <iostream>
using namespace std;

int main()
{
    int n,number,digit,rev=0;
    cout<<"Enter number:";
    cin>>number;
    number = n;
    do
    {
       digit=number%10;
       rev = rev*10 + digit;
       number = number/10;
    }
        while(number!=0);
    if(rev == n)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

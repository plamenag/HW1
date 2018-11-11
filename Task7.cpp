#include <iostream>
using namespace std;

int main()
{
    int month,year;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter year:";
    cin>>year;
    if(month == 1)
    {
        cout<<"January 31 days"<<endl;
    }
    if(month == 2)
    {
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            cout<<"February 28 days";
        }
        else
        {
            cout<<"February 29 days";
        }
    }
    if(month == 3)
    {
        cout<<"March 31 days";
    }
    if(month == 4)
    {
        cout<<"April 30 days";
    }
    if(month == 5)
    {
        cout<<"May 31 days";
    }
    if(month == 6)
    {
        cout<<"June 30 days";
    }
    if(month == 7)
    {
        cout<<"July 31 days";
    }
    if(month == 8)
    {
        cout<<"August 31 days";
    }
    if(month == 9)
    {
        cout<<"September 30 days";
    }
    if(month == 10)
    {
        cout<<"October 31 days";
    }
    if(month == 11)
    {
        cout<<"November 30 days";
    }
    if(month == 12)
    {
        cout<<"December 31 days";
    }

    return 0;
}

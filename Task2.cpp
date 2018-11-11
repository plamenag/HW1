#include <iostream>
using namespace std;
    int main()
{
    double Value;
    cout << "Value:";
    cin >> Value;

    double n; //Number of months
    cout << "Number of months:";
    cin >> n;

    double InterestRate;
    cout << "Interest rate:";
    cin >> InterestRate;

    double q;
    double MonthlyInterestRate;
    double MonthlyPayment;
    double TotalAmoundToBeReturned;
    MonthlyInterestRate = InterestRate / n;

    cout << "Monthly interest rate=" << MonthlyInterestRate;
    q = (MonthlyInterestRate / 100) + 1;
    cout << " q= "<< q;
    double result;
    double z = n;
    for (result = q; z > 1;z--)
    {
        result *= q;
    }
    MonthlyPayment = Value * ((result * (q - 1)) / (result - 1));
    cout <<" Monthly payment= " << MonthlyPayment;
    TotalAmoundToBeReturned= n* MonthlyPayment;
    cout <<" The total amount to be returned = " << TotalAmoundToBeReturned;
    return 0;
}

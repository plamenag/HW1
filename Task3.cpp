#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<n<<": ";

    int n1 = n;
    int k; //broq na cifrite na n
    for(k=1;n1>10;k++)n1/=10;

    //suma na cifrite na stepen k
    int s = 0;

    n1=n;
    do{
        int c = n1%10;//cifra ot n
        n1/=10;

        int cK = 1;//c^k
        for(int i=0;i<k;i++)cK*=c;

        s+=cK;

        cout <<c<<"^"<<k;
        if(n1!=0)cout<<" + ";
    }while(n1!=0);

    cout<<" = "<<s<<" ";

    if(s==n)cout<<"is ";
    else cout<<"is not ";

    cout<<"narcissistic"<<endl;
    return 0;
}

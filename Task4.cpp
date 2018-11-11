#include <iostream>
using namespace std;

int enter(){
    int command;
    bool valid;

    do{
        cout<<"1 - check balance"<<endl;
        cout<<"2 - enter voucher code"<<endl;
        cout<<"3 - exit"<<endl;
        cout<<"enter command: ";
        cin>>command;
        valid = (command>=1 && command<=3);
        if(!valid){
            cout<<"wrong command! try again!"<<endl;
        }
    }while(!valid);

    return command;
}

int main(){
    int balance = 5;

    int command = enter();
    while(command!=3){
        if(command == 1){
            cout<<"balance: "<<balance<<endl;
        }
        else if(command == 2){
            int voucher;
            cout<<"enter voucher code: ";
            cin>>voucher;

            int n5 = 0;
            do{ if(voucher%10==5)n5++; }while((voucher/=10) !=0);

            if(n5!=3)cout<<"invalid voucher code"<<endl;
            else{
                balance += 10;
                cout<<"balance is now: "<<balance<<endl;
            }
        }

        command = enter();
    }
}

#include<iostream>
using namespace std;
class BankAccount{
    public:
    string name;
    string account_type;
    double balance;
    BankAccount()
    {
        cout<<"Account Holder name : ";
        cin>>name;
        cout<<"Account Type : ";
        cin>>account_type;
        balance=0;
    }
    void display()
    {
        cout<<"Name  : "<<name<<" welcome"<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    void deposite()
    {
        double bal;
        cout<<"Amount you have : ";
        cin>>bal;
        balance+=bal;
        cout<<"successfull"<<endl;
        this->display();
    }
    void withdraw()
    {
        display();
        double wa;
        cout<<"Enter amount you want to withdaw : ";
        cin>>wa;
        if(wa>balance)
        {
            cout<<"Insufficiant balance "<<endl;
            return;
        }
        balance-=wa;
        cout<<"Successfull"<<endl;
        display();
    }
}; 
int main()
{
    BankAccount b1;
    b1.deposite();
    b1.withdraw();
    b1.display();
}
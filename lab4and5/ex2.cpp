#include<iostream>
using namespace std;

class monthlyBill{
    public:
    string name;
    int NumberOfCall;
    double BillAmount;
    monthlyBill()
    {
        cout<<"NAME  : ";
        cin>>name;
        cout<<"Number of Calls : ";
        cin>>NumberOfCall;
        BillAmount=-1;
    }
    void calBill()
    {
        
        BillAmount=200;
        if(NumberOfCall>100)
        {
            BillAmount+=(NumberOfCall-100)*0.6;
        }
        if(NumberOfCall>150)
        {
            BillAmount+=(NumberOfCall-150)*0.5;
        }
        if(NumberOfCall>200)
        {
            BillAmount+=(NumberOfCall-200)*0.4;
        }
    }

    void display()
    {
        cout<<"Coustmer name : "<<name<<endl;
        cout<<"Total pending payment : "<<BillAmount<<endl;
    }
};

int main()
{
    monthlyBill b;
    b.calBill();
    b.display();
}
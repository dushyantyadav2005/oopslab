#include<iostream>
using namespace std;

class IncomeTax{
    public:
    string name;
    double income;
    double taxdeo;
   IncomeTax()
   {
    cout<<"Enter your name :";
    cin>>this->name;
    cout<<"Enter your income : ";
    cin>>this->income;
    this->taxdeo=0;
   }
   void taxcom()
   {
        
            taxdeo=0;
        
        if(income>100000)
        {
            taxdeo+=(income-100000)*0.1;
        }
        if(income>150000)
        {
            taxdeo+=(income-150000)*0.2;
        }
        if(income>200000)
        {
            taxdeo+=(income-20000)*0.3;
        }
   }

   void dispaly()
   {
    cout<<"Name : "<<name<<endl;
    cout<<"Tax to pay : "<<taxdeo<<endl;
   }
};

int main()
{
    IncomeTax p1;
    p1.taxcom();
    p1.dispaly();   
}
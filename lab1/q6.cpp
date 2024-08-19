#include<iostream>
using namespace std;

struct TelephoneBills
{
    string name;
    double calls;
    double bill;
    double CalBill()
    {
        double ans=0;
        while(calls>=0)
        {
            if(calls>100)
            {
                ans+=200;
                calls-=100;
            }else{
                return 100;
            }
            if(calls>50)
            {
                ans+=0.6*50;
                calls-=50;
            }else{
                return ans+0.6*50;
            }
            if(calls>50)
            {
                ans+=0.5*50;
                calls-=50;
            }else{
                return ans+0.5*50;
            }
            return ans+calls*0.4;
        }
    }
};

int main()
{
    TelephoneBills a;
    cout<<"enter name : ";
    cin>>a.name;
    cout<<"enter calls of letters : ";
    cin>>a.calls;
    a.bill=a.CalBill();
    cout<<a.bill;
}
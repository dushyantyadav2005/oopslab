#include<iostream>
using namespace std;

struct MailingSysytem
{
    double weight;
    double price()
    {
        double ans=0;
        while(weight>=0)
        {
            if(weight>50)
            {
                ans+=2.5;
                weight-=50;
            }else{
                return weight*0.05;
            }
            if(weight>100)
            {
                ans+=4;
                weight-=100;
            }else{
                return ans+=weight*0.04;
            }
            if(weight>250)
            {
                ans+=6.25;
                weight-=250;
            }else{
                return ans+=weight*0.025;
            }
            return ans+weight*0.025;
        }
    }
};

int main()
{
    MailingSysytem a;
    cout<<"enter weight of letters : ";
    cin>>a.weight;
    cout<<a.price()<<endl;
}
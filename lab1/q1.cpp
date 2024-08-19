#include<iostream>
using namespace std;

struct Arithmetic
{
    double num1;
    double num2;
    
    double add()
    {
        return num1+num2;
    }
    double mul()
    {
        return num1*num2;
    }
    double sub()
    {
        return num1-num2;
    }
    double div()
    {
        return num1/num2;
    }
    

};

int main()
{
    Arithmetic a;
    cout<<"enter numbers : "<<endl;
    cin>>a.num1>>a.num2;
    cout<<a.add()<<endl;
    cout<<a.mul()<<endl;
    cout<<a.div()<<endl;
    cout<<a.sub()<<endl;
}

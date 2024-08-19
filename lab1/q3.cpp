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
    char s;
    cout<<"Oprator for opertaion which you want to perform : ";
    cin>>s;
    double c;
    switch (s)
    {
    case '+': c=a.add();
            cout<<c;
            break;
    case '-': c=a.sub();
            cout<<c;
            break;
    case '*': c=a.mul();
            cout<<c;
            break;
    case '/': c=a.div();
            cout<<c;
            break;
    default: cout<<"NOT CORRECT";
    }

}

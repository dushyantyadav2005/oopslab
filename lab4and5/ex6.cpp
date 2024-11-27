#include<iostream>
using namespace std;
 class B{
    public:
    int b;
    B()
    {
        cout<<"enter b: ";
        cin>>b;
    }
 };

class A{
    public:
    int a;
    A()
    {
        cout<<"enter a : ";
        cin>>a;
    }
    friend double mean(A &a,B &b);
};

 double mean(A &a,B &b)
 {
      return (double)((a.a)+b.b)/(2*1.0);
 }

 int main()
 {
    A a;
    B b;
   cout<<"Mean is : "<<mean(a,b)<<endl;
 }

#include<iostream>
using namespace std;

class Integer{
    public:
    int a;
    Integer(int a)
    {
        this->a=a;
    }
    Integer()
    {

    }
    friend Integer operator+(Integer&a,Integer&b)
    {
        Integer res;
        res.a=a.a+b.a;
        return res;
    }
    friend Integer operator-(Integer&a,Integer&b)
    {
        Integer res;
        res.a=a.a-b.a;
        return res;
    }
};

int main()
{
    Integer a(3);
    Integer b(3);
    Integer c=a+b;
    Integer d=a-b;
    cout<<c.a<<endl;
    cout<<d.a<<endl;
    // cout<<"eneter number : "<<endl;
    // cin>>d;
    // cout<<d;
    
}
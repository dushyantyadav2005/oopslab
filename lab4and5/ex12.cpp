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
    friend ostream& operator<<(ostream& os,Integer&a)
    {
        os<<a.a<<endl;
        return os;
    }
    friend istream& operator>>(istream& os,Integer&a)
    {
        os>>a.a;
        return os;
    }
};

int main()
{
    Integer a(3);
    Integer b(3);
    // Integer c=a+b;
    Integer d;
    cout<<"eneter number : "<<endl;
    cin>>d;
    cout<<d;
    // cout<<c;
}
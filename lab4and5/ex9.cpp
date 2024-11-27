#include<iostream>
using namespace std;

class class_1{
    public:
    int a;
    class_1(int s)
    {
        this->a=s;
    }
    friend void exchange(class_1 &a);
};
class class_2{
    public:
    int b;
    class_2(int h)
    {
        this->b=h;
    }
    friend void exchange(class_2 &a);
};

inline void exchange(class_1 &a)
{
    a.a=2*a.a;
}
inline void exchange(class_2 &b)
{
    b.b=2*b.b;
}


int main()
{
    class_1 a(2);
    exchange(a);
    cout<<a.a<<endl;
    class_2 b(5);
    exchange(b);
    cout<<b.b<<endl;
}
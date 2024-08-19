#include<iostream>
using namespace std;

struct Complex
{
    double real;
    double imag;
};

Complex add(Complex a,Complex b)
{
    Complex res;
    res.real=a.real+b.real;
    res.imag=a.imag+b.imag;
    return res;
}
Complex mul(Complex a,Complex b)
{
    Complex res;
    res.real=a.real*b.real;
    res.imag=a.imag*b.imag;
    return res;
}
Complex div(Complex a,Complex b)
{
    Complex res;
    res.real=a.real/b.real;
    res.imag=a.imag/b.imag;
    return res;
}
Complex sub(Complex a,Complex b)
{
    Complex res;
    res.real=a.real-b.real;
    res.imag=a.imag-b.imag;
    return res;
}

int main()
{
    Complex a;
    cout<<"enetr first Complex number : ";
    cin>>a.real>>a.imag;
    Complex b;
    cout<<"enter second Complex number : ";
    cin>>b.real>>b.imag;
    char s;
    cout<<"Oprator for opertaion which you want to perform : ";
    cin>>s;
    Complex c;
    switch (s)
    {
    case '+': c=add(a,b);
            cout<<c.real<<" "<<c.imag;
            break;
    case '-': c=sub(a,b);
            cout<<c.real<<" "<<c.imag;
            break;
    case '*': c=mul(a,b);
            cout<<c.real<<" "<<c.imag;
            break;
    case '/': c=div(a,b);
            cout<<"real : "<<c.real<<" "<<"Imaginary : "<<c.imag;
            break;
    default: cout<<"NOT CORRECT";
    }
}

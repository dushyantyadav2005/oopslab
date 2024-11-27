#include<iostream>
using namespace std;

class Vector{
   public:
   int n;
   int *a;
   Vector(int  n)
   {
    this->n=n;
     a=new int[n];
   }
   Vector()
   {

   }
   int Length()
   {
    return n;
   }
   Vector operator+(Vector &a)
   {
    int sz=max(a.Length(),this->n);
    int msz=min(a.Length(),this->n);
    Vector res(sz);
    if(a.Length()>this->n){
        int i=0;
    for(;i<msz;i++)
    {
        res.a[i]=a.a[i]+this->a[i];
    }
    for(;i<a.Length();i++)
    {
        res.a[i]=a.a[i];
    }
   } else{
            int i=0;
            for(;i<msz;i++)
            {
                res.a[i]=a.a[i]+this->a[i];
            }
            for(;i<this->n;i++)
            {
                res.a[i]=this->a[i];
            }
   }
   return res;
   }
   Vector operator-(Vector &a)
   {
    int msz=min(a.Length(),this->n);
    Vector res(msz);
        
    for(int i=0;i<msz;i++)
    {
        res.a[i]=a.a[i]-this->a[i];
    }

   return res;
   }
   friend istream& operator>>(istream& is,Vector &a);

};

istream& operator>>(istream& is,Vector &a)
{
    for(int i=0;i<a.n;i++)
    {
        is>>a.a[i];
    }
    return is;
}

ostream& operator<<(ostream& is,Vector &a)
{
    for(int i=0;i<a.n;i++)
    {
        is<<a.a[i]<<" ";
    }
    is<<endl;
    return is;
}

int main()
{
   Vector a(6);
   Vector b(3);
   cin>>a;
   cin>>b;
   Vector c=a+b;
   cout<<c;
   cout<<a;
   cout<<b;
   Vector d=a-b;
   cout<<d;
}
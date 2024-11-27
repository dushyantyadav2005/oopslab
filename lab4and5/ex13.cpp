#include<iostream>
using namespace std;
class Integer
{
    public:
    int data;
    Integer(int v)
    {
        this->data=v;
    }
    bool operator==(string a)
    {
        string k=to_string(data);
        return k==a;
    }
};
int main()
{
     Integer a(22);
     cout<<(a=="22")<<endl;

}
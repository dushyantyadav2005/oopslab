#include<iostream>
#include<vector>
using namespace std;


class employee{
    public:
    string name;
    double earning;
    double bonus;
    employee()
    {
        bonus=0;
        earning=0;
        name="unknown";
    }
    void setData()
    {
        cout<<"employee name is : ";
        cin>>this->name;
        cout<<"employee earning is : ";
        cin>>this->earning;
    }
    void bonuscal()
    {
        if(this->earning>=2000){
        this->bonus=earning*0.1;
        }

    }
    void display()
    {
        cout<<"Name of employee : "<<name<<endl;
        cout<<"Bonus of employee : "<<bonus<<endl;
    }
};
int main()
{
        employee e1;
        e1.setData();
        e1.bonuscal();
        e1.display();
}
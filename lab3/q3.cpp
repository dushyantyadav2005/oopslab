#include<iostream>
using namespace std;

class employee{
    public:
    static int no_of_emp;
    string employee_name;
    string employee_code;
    string designation;
    int yearOfExp;
    int age;
    employee();
    employee(string name,string code,string des,int exp,int age){
        this->employee_name=name;
        this->employee_code=code;
        this->designation=des;
        this->yearOfExp=exp;
        this->age=age;
        no_of_emp++;
    }
    employee(employee &e1)
    {
        this->employee_name=e1.employee_name;
        this->employee_code=e1.employee_code;
        this->designation=e1.designation;
        this->yearOfExp=e1.yearOfExp;
        this->age=e1.age;
        no_of_emp++;
    }
    ~employee()
    {
        cout<<"THIS IS DISTRUCTOR "<<endl;
    }

    void noofemployee()
    {
        cout<<"No of Employee are : "<<no_of_emp<<endl;
    }
   friend void display(employee *e);
};
int  employee::no_of_emp=0;
inline employee::employee(){no_of_emp++;}

void display(employee *e)
{
    cout<<"Name of employee is : "<<e->employee_name<<endl;
    cout<<"COde of employee is : "<<e->employee_code<<endl;
}

int main()
{
    employee* e1=new employee("Dushaynt", "u23ai085","Surat",15,18);
    display(e1);
    employee e2(*e1);
    display(&e2);
    e2.noofemployee();
    delete e1;
}

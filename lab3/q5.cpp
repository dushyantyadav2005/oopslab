#include<iostream>
#include<string>
using namespace std;


class employee{
    public:
    string name;
    string code;
    string designation;
    string account_name;
    string dateOfJoining;
    double BasicPay;
    static double da;
    static double hra;
    static double cca;
    static double ppf;
    static double gpf;
    static double cpf;
    employee(string name,string code,string designation,string account_name,string dateOfJoining,double BasicPay)
    {
        this->name=name;
        this->code=code;
        this->designation=designation;
        this->account_name=account_name;
        this->dateOfJoining=dateOfJoining;
        this->BasicPay=BasicPay;
    }
    employee()
    {

    }
    ~employee()
    {
        cout<<"employee changed"<<endl;
    }
    employee(employee&a)
    {
        this->name=a.name;
        this->code=a.code;
        this->designation=a.designation;
        this->account_name=a.account_name;
        this->dateOfJoining=a.dateOfJoining;
        this->BasicPay=a.BasicPay;
    }
    friend double Deductions(employee &a);
    
    friend double bonues(employee &a);

    double netSalary(int d,int b)
    {
        return BasicPay-((BasicPay*d)/100)+((BasicPay*b)/100);
    }
};
inline double Deductions(employee &a)
    {
        return a.ppf+a.gpf+a.cpf;
    }
double bonues(employee &a)
    {
        return a.da+a.hra+a.cca;
    }


double employee::da=0.2;
double employee::hra=0.2;
double employee::cca=0.2;
double employee::ppf=0.2;
double employee::gpf=0.2;
double employee::cpf=0.2;
    


int main()
{
    employee a("Dushyant","121","manager","76376","37623",100000000000000000);
    int d= Deductions(a);
    int b=bonues(a);
    cout<<a.netSalary(d,b)<<endl;
    employee c(a);
     d= Deductions(c);
    b=bonues(c);
    cout<<c.netSalary(d,b)<<endl;
    employee* e=new employee("Dushyant","121","manager","76376","37623",100000000000000000);
    delete e;
    
}
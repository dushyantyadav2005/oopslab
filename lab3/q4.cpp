#include<iostream>
using namespace std;

class patient {
    public:
    static int no_of_paitent;
    string patient_name;
    string sex;
    string natureOfill;
    int ward;
    int bedno;
    int age;
    patient();
    patient(string name,string sex,string nature,int ward,int bd,int age){
        this->patient_name=name;
        this->sex=sex;
        this->natureOfill=nature;
        this->ward=ward;
        this->bedno=bd;
        this->age=age;
        no_of_paitent++;
    }
    patient(patient &e1)
    {
        this->patient_name=e1.patient_name;
        this->sex=e1.sex;
        this->natureOfill=e1.natureOfill;
        this->ward=e1.ward;
        this->bedno=e1.bedno;
        this->age=e1.age;
        no_of_paitent++;
    }
    ~patient()
    {
        cout<<"THIS IS DISTRUCTOR "<<endl;
    }
    void numberOfpatient()
    {
        cout<<"Number of parent are : "<<no_of_paitent<<endl;
    }
   friend void display(patient *e);
};
int patient::no_of_paitent=0;
inline patient::patient(){no_of_paitent++;}

void display(patient *e)
{
    cout<<"Name of patient is : "<<e->patient_name<<endl;
    cout<<"COde of patient is : "<<e->sex<<endl;
}

int main()
{
    patient* e1=new patient("Rakesh", "Male","5",12,15,18);
    display(e1);
    patient e2(*e1);
    display(&e2);
    e2.numberOfpatient();
    delete e1;
}

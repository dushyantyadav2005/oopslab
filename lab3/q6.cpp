#include<iostream>
#include<string>
using namespace std;


class university_exam{
    public:
    string name;
    string roll_no;
    string sub_code;
    string sub_name;
    double internal_mark;
    double external_mark;
    university_exam(string name,string roll_no,string sub_code,string sub_name,double internal_mark,double external_mark)
    {
        this->name=name;
        this->roll_no=roll_no;
        this->sub_code=sub_code;
        this->sub_name=sub_name;
        this->internal_mark=internal_mark;
        this->external_mark=external_mark;
    }
    university_exam()
    {

    }
    ~university_exam()
    {
         cout<<"stdent transfered for new year"<<endl;
    }
    university_exam(university_exam&a)
    {
        this->name=a.name;
        this->roll_no=a.roll_no;
        this->sub_code=a.sub_code;
        this->sub_name=a.sub_name;
        this->internal_mark=a.internal_mark;
        this->external_mark=a.external_mark;
    }

    void dispaly()
    {
        cout<<this->name<<endl;
        cout<<this->roll_no<<endl;
        cout<<this->sub_code<<endl;
        cout<<this->sub_name<<endl;
        cout<<this->internal_mark<<endl;
        cout<<this->external_mark<<endl;
    }
    friend double internal_marks(university_exam &a);
    
    friend double external_marks(university_exam &a);

    double total_mark(int d,int b)
    {
        return d+b;
    }
};
inline double internal_marks(university_exam &a)
    {
        return a.internal_mark;
    }
double external_marks(university_exam &a)
    {
        return a.external_mark;
    }



    


int main()
{
    university_exam a("Dushyant","121","manager","76376",100,100);
    int d= internal_marks(a);
    int b=external_marks(a);
    cout<<a.total_mark(d,b)<<endl;
    university_exam c(a);
    a.dispaly();
     d= internal_marks(c);
    b=external_marks(c);
    cout<<c.total_mark(d,b)<<endl;
    university_exam* e=new university_exam("Dushyant","121","manager","76376",100,100);
    delete e;
    
}
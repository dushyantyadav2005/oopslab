#include<iostream>
using namespace std;


class StudentData{
    public:
    string *name;
    int NoOfStudent;
    StudentData()
    {
        int n;
        cout<<"Enter number of student : ";
        cin>>n;
        NoOfStudent=n;
        name=new string[6];
        cout<<"ENTER name : ";
        for(int i=0;i<n;i++)
        {
            cin>>name[i];
        }
   }
    void dispaly()
    {
        for(int i=0;i<NoOfStudent;i++)
        {
            cout<<name[i]<<endl;
        }
    }
    ~StudentData()
    {
        cout<<"EXITING"<<endl;
        delete(name);
    }
};

int main()
{
    StudentData *s1=new StudentData();
    s1->dispaly();
    delete(s1);
}
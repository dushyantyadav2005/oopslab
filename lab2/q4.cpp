#include<iostream>
using namespace std;
class Student{
    private:
    string admno;
    string Name;
    int marksEng;
    int marksMaths;
    int marksSci;
    int total();
    public:
    void readData()
    {
        cout<<"enetr admission number : ";
        cin>>admno;
        cout<<"enter name : ";
        cin>>Name;
        cout<<"enter english marks : ";
        cin>>marksEng;
        cout<<"enter maths marks : ";
        cin>>marksMaths;
        cout<<"enter science marks : ";
        cin>>marksSci;
    }
    void showData()
    {
        cout<<"admission number : "<<admno<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"english marks : "<<marksEng<<endl;
        cout<<"maths marks : "<<marksMaths<<endl;
        cout<<"science marks : "<<marksSci<<endl;
        cout<<"Total marks : "<<total()<<endl;
    }
};
inline int Student::total()
{
    int ans=0;
    ans+=marksEng+marksMaths+marksSci;
    return ans;
}
int main()
{
        Student s1;
        s1.readData();
        s1.showData();
}
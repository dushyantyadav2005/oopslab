#include<iostream>
using namespace std;
class Data{
    private:
    int day;
    int month;
    int year;
    public:
    Data()
    {
        this->day=12;
        this->month=3;
        this->year=1993;
    }
    Data (int day,int year,int month)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    Data(Data &d)
    {
        this->day=d.day;
        this->month=d.month;
        this->year=d.year;
    }
    void getData()
    {
        cout<<"Day : "<<this->day<<endl;
        cout<<" Month : "<<this->month<<endl;
        cout<<" Year : "<<this->year<<endl;
    }
};
int main()
{
    Data d1,d2(d1);
    cout<<"d1 data : "<<endl;
    d1.getData();
    cout<<"d2 data : "<<endl;
    d2.getData();
    Data d3(1,2,3);
    cout<<"d3 data : "<<endl;
    d3.getData();
}
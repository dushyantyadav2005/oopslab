#include<iostream>
#include<vector>
using namespace std;

class Librarey{
    public:
    static const int dueDay;
    inline void dueday()
    {
        cout<<"Total Day book is Issued: "<<this->dueDay<<endl;
    }
    static inline vector<int> dateCal(string a)
    {
        
      string p=a.substr(0,2);
      int day=stoi(p);
       p=a.substr(3,2);
       int month=stoi(p);
       p=a.substr(6,10);
       int year=stoi(p);
       return {day,month,year};
    } 

    static inline int dayLimit(int n,int y)
    {
            if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
            {
                return 31;
            }
            if(n==2)
            {
                if(y%4==0)
                {
                    return 29;
                }
                return 28;
            }
            return 30;
    }
    string dueDate(const string& a) {
        vector<int> date = dateCal(a);
        int day = date[0], month = date[1], year = date[2];
        cout<<year<<endl;
        int dd = dueDay;

        while (dd > 0) {
            int limitDay = dayLimit(month, year);
            if (day + dd > limitDay) {
                dd -= (limitDay - day + 1);
                day = 1;
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
            } else {
                day += dd;
                dd = 0;
            }
        }

        return to_string(day) + '-' + to_string(month) + '-' + to_string(year);
    }
};

const int Librarey::dueDay=15;
int main()
{
    Librarey l1;
    cout<<l1.dueDate("17-12-1999")<<endl;
}
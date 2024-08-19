#include<iostream>
#include<vector>
using namespace std;


class clas1{
    public:
    vector<string> a;
    clas1()
    {

    }
    clas1(clas1 &c1)
    {
        a=c1.a;
    }

    int prfunc(string p)
    {
        int ans=0;
        for(int i=0;i<this->a.size();i++)
        {
            if(p==this->a[i])
            {
                ans++;
            }
        }
        return ans;
    }
    ~clas1()
    {
        cout<<"I AM DISTRUCTOR"<<endl;
    }
};


int main()
{
    clas1 c1;
    int n;
    cout<<"HOW MANY LINES : ";
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
    string s;
    cout<<"enter line : ";
    getline(cin,s);
    c1.a.push_back(s);
    }

    cout<<" line you want to check in text : ";
    string s1;
    getline(cin,s1);
    cout<<"NUMBER OF TIME LINE IN TEXT : "<<c1.prfunc(s1)<<endl;

}

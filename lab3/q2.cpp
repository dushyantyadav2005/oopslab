#include<iostream>
#include<vector>
using namespace std;


class clas1{
    public:
    string a;
    clas1()
    {

    }
    clas1(clas1 &c1)
    {
        a=c1.a;
    }

    bool prfunc(string p,string q)
    {
        for(int i=0;i<this->a.length();i++)
        {
            int k=0;
            for(int j=i;j<p.length();j++)
            {
                if(p[k]==this->a[j])
                {
                    k++;
                }else{
                    break;
                }
            }
            if(k==p.length())
            {
                k=0;
                 for(int j=i;j<p.length();j++)
                {
                    this->a[j]=q[k];
                    k++;
                }
                return true;
            }
        }
        return false;
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
    c1.a+=s;
    }

    string s1;
    cout<<" line you want to check in text : ";
    getline(cin,s1);
    string s2;
    cout<<" string you want to replace : ";
    getline(cin,s2);
    cout<<s1<<s2<<endl;
    cout<<"NUMBER OF TIME LINE IN TEXT : "<<c1.prfunc(s1,s2)<<endl;
    cout<<c1.a<<endl;

}
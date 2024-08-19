#include<iostream>
using namespace std;

struct store{
    int n;
    int m;
    int p;
    double cost()
    {
        int minier=1500*n-(0.05*1500*n);
        int fan=200*m-(0.15*200*m);
        int toaster=450*p-(0.1*450*p);
        return minier+fan+toaster;
    }
};

int main()
{
      store s1;
      cout<<"enetr number of minier ,fan and toaster : ";
      cin>>s1.n>>s1.m>>s1.p;
      cout<<s1.cost()<<endl;
}
#include<iostream>
#include<map>
using namespace std;

class employee{
    public:
    string name;
    string id;
    int age;
    static map<string,pair<string,int>>mp;
    employee( string name,string id,int age )
    {
        mp[id]={name,age};
        this->name=name;
        this->age=age;
        this->id=id;
    }
};
map<string, pair<string, int>> employee::mp;
int main()
{
    employee e("rahul","347",23);
    cout<<employee::mp["347"].first<<endl;
}
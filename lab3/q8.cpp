#include<iostream>
#include<string>
using namespace std;


class personal_info{
    public:
    string name;
    string dob;
    string blood_group;
    double height;
    double weight;
    double insurance_polocy_number;
    string contact_adresse;
    personal_info(string name,string dob,string blood_group,double height,double weight,double insurance_polocy_number,string add)
    {
        this->name=name;
        this->dob=dob;
        this->blood_group=blood_group;
        this->height=height;
        this->weight=weight;
        this->insurance_polocy_number=insurance_polocy_number;
        this->contact_adresse=add;
    }
    personal_info()
    {

    }
   ~ personal_info()
    {
        cout<<"information deleted"<<endl;
    }
    personal_info(personal_info&a)
    {
        this->name=a.name;
        this->dob=a.dob;
        this->blood_group=a.blood_group;
        this->height=a.height;
        this->weight=a.weight;
        this->insurance_polocy_number=a.insurance_polocy_number;
        this->contact_adresse=a.contact_adresse;
    }

    void dispaly()
    {
        cout<<this->name<<endl;
        cout<<this->dob<<endl;
        cout<<this->blood_group<<endl;
        cout<<this->height<<endl;
        cout<<this->weight<<endl;
        cout<<this->insurance_polocy_number<<endl;
    }

};



    


int main()
{
    personal_info a("Dushyant","121","manager",76376,100,100,"eudwduwk");
    
    personal_info c(a);
    a.dispaly();
    c.dispaly();
    personal_info* e=new personal_info("Dushyant","121","manager",76376,100,100,"dhghwhidh");
    delete e;
    
}
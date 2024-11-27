#include<iostream>
#include<math.h>
using namespace std;
class cuboid{
    public:
    int height;
    int width;
    int length;
    cuboid()
    {
        cout<<"Enter height : ";
        cin>>height;
        cout<<"Enter width : ";
        cin>>width;
        cout<<"Enter length : ";
        cin>>length;
    }
    double area()
    {
        return 2*(height+width)+2*(width+length)+2*(height+length);
    }
    friend int volumecal(cuboid &c);
    friend double cubelength(cuboid &c);

};

int volumecal(cuboid& c)
{
    return c.length*c.width*c.height;
}

double cubelength(cuboid& c)
{
    int volume=volumecal(c);
    // cout<<volume;
    int i=1,j=volume;
    int ans=0;
    while(i<j)
    {
        int mid=(i+j)/2;
        if(mid*mid*mid<=volume)
        {
            ans=mid;
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    return ans;
}

int main()
{
    cuboid c;
    cout<<volumecal(c)<<endl;
    cout<<cubelength(c)<<endl;
}


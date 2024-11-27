#include<iostream>
using namespace std;
class Publising{
    public:
    string pub_name;
    string owner;
    Publising()
    {
        cout<<"enter name of Publising company : ";
        cin>>pub_name;
        cout<<"Enter owner name : ";
        cin>>owner;
    }

};
class book:public Publising{
    public:
    string book_title;
    double book_price;
    string book_author;
    static int pcount;
    void getData()
    { 
        pcount++;
        cout<<" Enter book Title : ";
        cin>>book_title;
        cout<<" Enter book price : ";
        cin>>book_price;
        cout<<"Enter book author : ";
        cin>>book_author;
    }
    void displayData()
    { 
        cout<<"Book title : "<<book_title<<endl;
        cout<<"Book Author is : "<<book_author<<endl;
        
    }
    static void getcount()
    {
        cout<<"total number of books are : "<<pcount<<endl;
    }
};
int book::pcount=0;
class Ebook:public Publising{
    public:
    string book_title;
    double book_price;
    string book_author;
    static int pcount;
    void getData()
    { 
        pcount++;
        cout<<" Enter Ebook Title : ";
        cin>>book_title;
        cout<<" Enter Ebook price : ";
        cin>>book_price;
        cout<<"Enter Ebook author : ";
        cin>>book_author;
    }
    void displayData()
    {
        cout<<"Book title : "<<book_title<<endl;
        cout<<"Book Author is : "<<book_author<<endl;

    }
    static void getcount()
    {
        cout<<"total number of Ebooks are : "<<pcount<<endl;
    }
};
int Ebook::pcount=0;
int main()
{
    //  Publising p;
     book b;
     b.getData();
     b.displayData();
     Ebook e;
     e.getData();
     e.displayData();
}
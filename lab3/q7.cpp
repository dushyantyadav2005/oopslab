#include<iostream>
#include<string>
using namespace std;

class librarey
{
   public:
   static int total_book;
    int total_books()
    {
        return total_book;
    }
};
int librarey::total_book=0;
class book:public librarey
{
    public:
    string accession_number;
    string name_of_author;
    string title_of_book;
    string year_of_publication;
    double cost_of_book;
    book(string accession_number,string name_of_author,string title_of_book,string year_of_publication,double internal_mark,double cost_of_book)
    {
        this->accession_number=accession_number;
        this->name_of_author=name_of_author;
        this->title_of_book=title_of_book;
        this->year_of_publication=year_of_publication;
         total_book++;
        this->cost_of_book=cost_of_book;
    }
    book()
    {
        total_book++;
    }
    
    book(book&a)
    {
        this->accession_number=a.accession_number;
        this->name_of_author=a.name_of_author;
        this->title_of_book=a.title_of_book;
        this->year_of_publication=a.year_of_publication;
        total_book++;
        this->cost_of_book=a.cost_of_book;
    }

    void dispaly()
    {
        cout<<this->accession_number<<endl;
        cout<<this->name_of_author<<endl;
        cout<<this->title_of_book<<endl;
        cout<<this->year_of_publication<<endl;
        cout<<this->cost_of_book<<endl;
    }
   
};


    


int main()
{
    book a("Dushyant","121","manager","76376",100,100);
    book c(a);
    cout<<"A data : ";
    a.dispaly();
cout<<" C data : ";
   c.dispaly();
    book* e=new book("Dushyant","121","manager","76376",100,100);
    cout<<"Total books are : "<<a.total_books()<<endl;
    delete e;
    
}
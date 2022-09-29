#include<iostream>
#include<string>
using namespace std; 
class Publication
{
    public: string title;
            float price; 
            Publication()
            {
                cout<<"\nEnter item Title: ";
                cin>>title; 
                cout<<"\nEnter item Price: ";
                cin>>price; 
            }   
};

class Book: public Publication
{
    public: int pageCount; 
            Book()
            {
                cout<<"\nEnter no. of pages: ";
                cin>>pageCount; 
            }

            void Display()
            {
                cout<<"\nBook: "<<title; 
                cout<<"\nPrice: "<<price; 
                cout<<"\nPages: "<<pageCount; 
            }
            
};  
class Record: public Publication
{
    public: int playTimeInMinutes; 
            Record()
            {
                cout<<"\nEnter playtime: ";
                cin>>playTimeInMinutes; 
            }

            void Display()
            {
                cout<<"\nRecord: "<<title; 
                cout<<"\nPrice: "<<price; 
                cout<<"\nLength: "<<playTimeInMinutes<<"mins"; 
            }
};

void Chooose()
{
    while(true){
        int a; 
        cout<<"\nPublishing...";
        cout<<"Choose to add. \n1.Book \n2.Tapes Record \n 3.See available \n4."; 
        cin>>a; 
        switch(a)
        {
            case 1: AddBook(); 
            break; 
            case 2: AddTape(); 
            break;
            case 3: SeeBooks();
            break;
            case 4: SeeTapes();
            break;
            default: 
            break; 
        }
    }

}

void AddBook()
{
    int x; 
    cout<<"Enter no. of books to add: "; 
    cin>>x; 
    Book b[x]; 

}
void AddTape(){}
void SeeBooks(){}
void SeeTapes(){}

int main()
{
   Record r;
   Book b;

   r.Display();
   b.Display(); 

    return 0;
}
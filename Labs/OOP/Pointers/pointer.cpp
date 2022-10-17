#include<iostream>
using namespace std; 

class Base
{
    public: int num;
            void Pr()
            {
                cout<<"Hello"<<num; 
            } 
};
class der: Base
{ 
    public: int ne;
};

int main()
{
    cout<<"hello world"; 
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
#include<fstream>
#include<string>
using namespace std; 
class E
{
    public: int no, bo; 
        void getData()
        {
            no = 90;
            bo=999; 
        }
        void display()
        {
            cout<<no<<"\t"<<bo<<"\n";
        }
};
int main() {
    
    fstream f; 
    E e[5]; 
    
    f.open("edat.txt"); 
    
    for(int i=0;i<2;i++)
    {
        cout<<"\n Enter information of:"<<i+1<<"\n Employee:";
        e[i].getData();
        f.write((char*)&e[i],sizeof e[i]);
    }
    string line; 
    int i = 0; 
    for(i = 0; i<5;i++)
    {       
        // Print line (read from file) in Console
        cout << line << endl;
        e[i].display(); 
        cout<<"\n";
        i++;
    }
 
   

    return 0;
}
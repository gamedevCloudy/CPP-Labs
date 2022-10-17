#include<iostream>
using namespace std; 


class Base{
  public: Base(){
      cout<<"Hello ";
  }  
};

class Der: Base{
  public: Der(){
      cout<<"World";
  }  
};

int main(){
    Der d; 
    Der *p = &d; 
    cout<<"\n"<<p; 
    return 0;
}

#include <iostream>
#include<cstdio>
using namespace std;



void Calc(int choice){
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y; 
	switch(choice){
		case 1: 
			cout<<"Addition is: "<<x<<"+"<<y<<"="<<x+y; 
			break;
		case 2: cout<<"Substraction is:"<<x<<"-"<<y<<"="<<x-y; 
			break; 
		case 3: 
			cout<<"Multiplication is: "<<x<<"*"<<y<<"="<<x*y; 
			break; 
		case 4: cout<<"Division is: "<<x<<"/"<<y<<"="<<x/y; 
			break;
		default: 
			cout<<"Error, incorrect operation."; 
			break;
	}
		
}
void Start(){
	
	int choice; 
	cout<<"Choose an opration....\n"; 
	cout<<"1. Addition\n2. Substration\n3.Multiplication\n4.Division"<<endl; 
	cout<<"Enter Operation: "; 
	cin>>choice; 
	Calc(choice); 
	
}

int main() {
  Start(); 
}

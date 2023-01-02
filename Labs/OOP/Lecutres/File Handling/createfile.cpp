#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	cout<<"hello"; 
	fstream fout;
	fout.open("hello.txt");
	fout<<"hello"; 
	
	
	return 0;
}

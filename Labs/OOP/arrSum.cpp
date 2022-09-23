//CPP program to find sum of elements of an arry
//this program uses pointers and references. 

#include <iostream>
using namespace std; 

void print(string ToPrint)
{
	cout<<ToPrint<<endl; 
}

int GetArray()
{
	int a; 
	print("EnterNums");
	cin>>a;
	int arr[a];
	print("Enter numbers now: "); 
	for(int i =0; i <a; i++)
		{
			int num; 
			cin>>num; 
			arr[i] = num; 
		}
	return *arr; 
}

int SumofElemnts(int *arr)
{
	int sum = 0; 
	for(int i = 0; i<=sizeof(*arr); i++)
		sum+=arr[i];
	return sum;
}
int main() {
	int numArr = GetArray(); 
	cout<<"Sum is: "<<SumofElemnts(&numArr); 
}

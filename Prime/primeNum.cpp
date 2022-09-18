#include <iostream>
using namespace std; 

int main() {
 cout<<"Check Prime no..."<<endl; 

	for(int i = 1; i <=50; i++)
		{
			// cout<<endl; 
			int factors[] = {0,0};
			int counter =0; 
			for(int j = 1; j<=i; j++)
				{
					if(i%j == 0)
					{
						if(counter == 0)factors[0] = j;
						else factors[1] =j;
						counter += 1; 
					}
				}
			if(counter == 2){cout<<i<<" ";}
			
		}
}

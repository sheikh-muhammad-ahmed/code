#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter any number ";
	cin>>num;
	if(num==2||num==3||num==5)
	{
		cout<<num<<" is a prime number"<<endl;
	} 
	else if(num!=2||num!=3||num!=5)
	{
		 if(num%2==0)
	{
		cout<<num<<" is a composite number"<<endl;
    }
	 else if(num%3==0)
	{
		cout<<num<<" is a composite number"<<endl;
	}
	else if(num%5==0)
	{
		cout<<num<<" is a composite number"<<endl;
	}
	else 
	{
		cout<<num<<" is a prime number"<<endl;
	}	
	}
	
	
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int limit,number;
	cout<<"enter the limit of your table :: ";
	cin>>limit;
	cout<<"enter the number for table :: ";
	cin>>number;
		for(int i=1;i<=limit;i++)
	{
	cout<<number<<"x"<<i<<"="<<number*i<<endl;
	}
	return 0;
}


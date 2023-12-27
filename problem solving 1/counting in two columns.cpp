#include<iostream>
using namespace std;
int main()
{
	int i,z=2,number;
	cout<<"enter number how many numbers you want::";
	cin>>number;
	for(i=1;i<number;i++)
	{
		cout<<i<<"\t";
	    i++;
		cout<<z<<"\n";
		z++;
		z++;
	}
	return 0;
}

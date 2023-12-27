#include<iostream>
using namespace std;
int main()
{ 
	int limit,i,array[i],sum,z=0,k=0;
	cout<<"enter the size of your array ";
	cin>>limit;
	cout<<"enter "<<limit<<" numbers for your array\n";
	for(i=1;i<=limit;i++)
	{
	cin>>array[i];
	if(array[i]%2==0)
	{
	cout<<"even \n";
    ++z;
    }
	else
	{
	cout<<"odd \n";
	++k;
    }
	}
	cout<<"there are "<<z<<" even numbers in above array you entered"<<endl;
	cout<<"there are "<<k<<" odd numbers in above array you entered"<<endl;
	
 return 0;
}


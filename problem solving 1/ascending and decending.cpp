#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the size of your array :: ";
	int size;
  	cin>>size;
  	int z;
  	z=size;
  	int arr[size];
	for(int i=0;i<size;i++)
	{
	  cout<<"enter "<< z <<" element for your array";
      cin>>arr[i];
      z--;
	}
	int number1=arr[0],y;
	
	for(int i=0;i<=size;i++)
	{
	 if(arr[i]>number1)
	 {
		number1=arr[i];
	 }
    }
    cout<<number1;
 return  0;
}

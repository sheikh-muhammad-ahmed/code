#include<iostream>
using namespace std;
int main()
{
	int largestelement,smallestelement,size;
	cout<<"enter the size of youe arraay";
	cin>>size;
	cout<<"enter array elements";
	int arr[size];
    for(int i=0;i<size;i++)
    {
    	cin>> arr[i];
	}
	largestelement=arr[0];
	smallestelement=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>largestelement)
		{
			largestelement=arr[i];
		}
		if(arr[i]<smallestelement)
		{
			smallestelement=arr[i];
		}
	}
	cout<<largestelement<<endl;
	cout<<smallestelement;
	return 0;
}

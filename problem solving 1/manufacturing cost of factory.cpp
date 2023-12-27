#include<iostream>
using namespace std;
int main()
{
	float itemcost,y,average;
	int itemtype,partscost,i,z,itemtypetimes;
	cout<<"Enter how many times you want to enter your item type "<<endl;
	cin>>itemtypetimes;
	z=itemtypetimes;
	for(i=1;i<=itemtypetimes;i++)
  {
	cout<<"enter item type "<<z<<" times"<<endl;
	cout<<"your item type should be less than four"<<endl;
	cin>>itemtype;
	cout<<"enter your parts cost "<<z<<" times"<<endl;
	cin>>partscost;
	z--;
	if(itemtype==1)
	{
	itemcost=partscost*1.5;
	cout<<"your item cost is "<<itemcost<<endl;
	}
	else if(itemtype==2)
	{
	itemcost=partscost*2.5;
	cout<<"your item cost is "<<itemcost<<endl;
	}
	else if(itemtype==3)
	{
	itemcost=partscost*5.0;
	cout<<"your item cost is "<<itemcost<<endl;
	}
	else
	{
	cout<<"your item type is invalid,it must be less than 4 and greater than 0 "<<endl;
	}
	y+=itemcost;
   }
   cout<<"your total item cost is "<<y<<"."<<endl;
   average=y/itemtypetimes;
   cout<<"average of your total item cost is "<<average<<endl;
	return 0;
}

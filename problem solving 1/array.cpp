#include<iostream>
using namespace std;
int main(){
	int z,array[5]={28,91,82,71,10},array2[3];
	cout<<"it is aray number 1"<<endl;
	cout<<array[0]<<endl;
	cout<<array[1]<<endl;	
	cout<<array[2]<<endl;
	cout<<array[3]<<endl;
	cout<<array[4]<<endl;
    cout<<"it is aray number 2"<<endl;
    array2[0]=0;
    array2[1]=90;
    array2[2]=13;
    cout<<array2[0]<<endl;
	cout<<array2[1]<<endl;
	array2[2]=14;
	cout<<array2[2]<<endl;  
	for(z=0;z<5;z++)
	{
		cout<<"printing elements of array1 by using for loop "<<array[z]<<endl;
	}
	return 0;
}



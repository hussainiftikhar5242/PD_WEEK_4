#include<iostream>
using namespace std;
main()
{
	int temp1,temp2;
	cout<<"enter 1st city temperature:";
	cin>> temp1;
	cout<<"enter 2nd city temperature:";
	cin>> temp2;
	int difference=temp1-temp2;
	if(difference>10)
	{
		cout<<"difference is too big:"<<endl;
	}
	cout<<"program end";
}
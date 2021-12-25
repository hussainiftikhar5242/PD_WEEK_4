#include<iostream>
using namespace std;
main()
{
	float speed=0;
	cout<<"enter car speed:";
	cin>>speed;
	if(speed<=10)
	{
		cout<<"slow";
	} 
	else if (speed <=50)
	{
		cout<<"average";
	}
	else if (speed <=150)
	{
		cout<<"fast";
	} 
	else if (speed <=1000)
	{
		cout<<"ultra fast";
	} 
	else 
	{
		cout<<"extremely fast";
	
	
 
	}
 
 


}
		
	
 
#include<iostream>
using namespace std;
main()
{
	string countryname;
	float Ticketprice=0;
	float discount=0;
	cout<<"enter country name:";
	cin>> countryname;
	cout<<"enter ticket price in dollar:";
	cin>> Ticketprice;
	if(countryname=="ireland")
	{
		discount=(Ticketprice*10)/100;
		Ticketprice=Ticketprice-discount;
		cout<<"PRICE AFTER discount:"<<Ticketprice;
	}
	else 
	{
		discount=(Ticketprice*5)/100;
		Ticketprice=Ticketprice-discount;
		cout<<"PRICE AFTER discount:"<<Ticketprice;

	}
}
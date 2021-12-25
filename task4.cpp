#include<iostream>
using namespace std;
main()
{
	int rname,wname,tname;
	cout<<"enter number of red roses ";
	cin>>rname;
	cout<<"enter number of white roses ";
	cin>>wname;
	cout<<"enter number of tuplies roses ";
	cin>>tname;
	float discount=0;
	float price1=0;
	price1=rname * 2;
	float price2=0;
	price2=wname * 4.1;
	float price3=0;
	price3=tname * 2.5;
	float totalprice=price3+price2+price1;
	if(totalprice>200)
	{
		discount=(totalprice*20)/100;
		cout<<"original price:"<<totalprice;
		discount=totalprice-discount;
		cout<<"price after discount:"<<discount;
	}
	else 
	{
		cout<<"original price:"<<totalprice;
		discount=totalprice-discount;
		cout<<"price after discount:"<<discount;
	}	

}
		
	
 
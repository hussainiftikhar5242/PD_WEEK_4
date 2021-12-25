#include<iostream>
using namespace std;
main()
{
	int num=0;
	cout<<"enter a number:from 1 to 100:";
	cin>>num;
	int y=num/10;
	int x=num%10;
	string num1,num2;
	if (y==1)
	{
		num1="ten";
	}
	if(y==2)
	{
		num1="twenty";
	}
	if(y==3)
	{
		num1="thirty";
	}
	if(y==4)
	{
		num1="fourty";
	}
	if(y==5)
	{
		num1="fifty";
	}
	if(y==6)
	{
		num1="sixty";
	}
	if(y==7)
	{
		num1="seventy";
	}
	if(y==8)
	{
		num1="eighty";
	}
	if(y==9)
	{
		num1="nighty";
	}
	if (x==1)
	{
		num2="one";
	}
	if(x==2)
	{
		num2="two";
	}
	if(x==3)
	{
		num2="three";
	}
	if(x==4)
	{
		num2="four";
	}
	if(x==5)
	{
		num2="five ";
	}
	if(x==6)
	{
		num2="six";
	}
	if(x==7)
	{
		num2="seven";
	}
	if(x==8)
	{
		num2="eighty";
	}
	if(x==9)
	{
		num2="nine";
	}

	if(num==11)
	{
		num1="eleven";
		num2=" ";
	}
	if(num==12)
	{
		num1="tweleve";
		num2=" ";
	}
	if(num==13)
	{
		num1="thirteen";
		num2=" ";
	}
	if(num==14)
	{
		num1="fourteen";
		num2=" ";
	}
	if(num==15)
	{
		num1="fifteen";
		num2=" ";
	}
	if(num==16)
	{
		num1="sixteen";
		num2=" ";
	}
	if(num==17)
	{
		num1="seventeen";
		num2=" ";
	}
	if(num==18)
	{
		num1="eighteen";
		num2=" ";
	}
	if(num==19)
	{
		cout<<"nighteen";
	}
	if(num==0)
	{
		num1="zero";
		num2=" ";
	}
	cout<<num1<<" "<< num2;

}

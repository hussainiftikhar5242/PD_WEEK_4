#include<iostream>
using namespace std;
main()
{
	string figuretype;
	cout<<"enter type of figure : square, rectangle, circle and triangle.";
	cin>> figuretype;
	if(figuretype=="square")
	{
		float length=0;
		cout<<"enter length";
		cin>> length;
		float area=length*length;
		cout<<figuretype;
		cout<<"area of square is :"<<area;
	}
	if(figuretype=="rectangle")
	{
		float length,width;
		cout<<"enter length";
		cin>> length;
		cout<<"enter width:";
		cin>> width;
		float area=length*width;
		cout<<figuretype;
		cout<<"area of rectangle is :"<<area;	
	}
	if(figuretype=="circle")
	{
		float length;
		cout<<"enter length";
		cin>> length;
		float area=length*length*3.14;
		cout<<figuretype;
		cout<<"area of circle is :"<<area;	
	}
	if(figuretype== "triangle")
	{
		double length,hight;
		cout<<"enter length";
		cin>> length;
		cout<<"enter hight:";
		cin>> hight;
		float area=(length*hight)*1/2;
		cout<<figuretype;
		cout<<"area of triangle is :"<<area;	
	}
	
 


}
		
	
 
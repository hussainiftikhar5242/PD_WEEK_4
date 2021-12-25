#include<iostream>
using namespace std;
main()
{
	int holidays;
	cout<<"enter number of holidays:";
	cin>> holidays;
	int yearsdays=365;
	float wdays=365-holidays;
	wdays=wdays*63+holidays*127;
	cout<<"The time for games is"<<wdays<<endl;
	float norm=30000-wdays;
	cout<<"the difference from yhe norm is :"<<norm<<endl;
	int hours=norm/60;
	float mintue=norm/60;
	double min=mintue-hours;
	min=min*60;
	if(norm>0)
	{
		cout<<"tom sleep well"<<endl;
		cout<<hours<<"hours"<<min<<"mintue";
	}
	else 
	{	hours=hours*(-1);
		min=min*(-1);
		cout<<"tom wil run away"<<endl;
		cout<<hours<<"hours"<<min<<"mintue";		
	}



}



#include<iostream>
#define PI 3.14
using namespace std;
class par
{
public:
	void getrad(int r)
	{
		rad=r;
	}
protected:
	int rad;

};
class chi:public par
{
public:
	int getarea()
	{
		return (PI*rad*rad);	
	}
	int getperi()
	{
		return (2*PI*rad);
	}

};
int main()
{

	chi c;	
	c.getrad(5);
	//area of the circle
	cout<<"area--> "<<c.getarea()<<"\n";
	cout<<"peri--> "<<c.getperi()<<"\n";
	
}

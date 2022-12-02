#include<iostream>
using namespace std;
class par
{
protected:
	int a;
public:
	par()
	{
	
	}
	par(int x)
	{
		a=x;
	}
};
class chi:public par
{
	int b;
public:
	chi()
	{
	}
	chi(int x,int y):par(y)
	{
		b=x;
	}
	void show()
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	chi c(20,10);	
	c.show();
	par p=c;
	c.show();
}

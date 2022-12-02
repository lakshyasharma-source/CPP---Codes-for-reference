#include<iostream>
using namespace std;
class par
{
protected:
	int a,b;
public:
	par(int x=0,int y=0)
	{
		a=x,b=y;
		cout<<"par default:\n";
	}
	~par()
	{
		cout<<"par destructor:\n";
	}
};
class chi:public par
{
	int c;
public:
	chi(int x,int y,int z=0):par(x,y)
	{
		c=z;
		cout<<"child constrctor:\n";
	}
	~chi()
	{
		cout<<"child destrctor:\n";
	}
	void display()
	{
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
};
int main()
{
	chi o(10,20,30);
	o.display();
}

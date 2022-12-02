
#include<iostream>
using namespace std;
class base
{
	int a,b;
public:
	base(int x,int y)
	{
		a=x,b=y;
		cout<<"a-->"<<a<<"b-->"<<b<<endl;
	}	
	base()
	{
		cout<<"base class constructor\n";
	}
	~base()
	{
		cout<<"base class destructor\n";
	
	}
};
class deri:public base
{
	int x,y;
public:
	deri(int a,int b)
	{
		x=a,y=b;
		cout<<"x-->"<<x<<"y-->"<<y<<endl;
	
	}
	deri()
	{
		cout<<"deri class constructor\n";
	}
	~deri()
	{
		cout<<"deri class desstructor\n";
	
	}
};
int main()
{
	deri o(10,20);
}


#include<iostream>
using namespace std;
class base//abstract class
{
	int x;
public:
	virtual void fun()=0;//pure virtual functions
	int get()
	{
		return x;
	}
};
class derived:public base 
{
	int y;
public:
	void fun()
	{	
		cout<<"fun() called"<<endl;
	}
};
int main()
{
	derived d;
	d.fun();
	cout<<d.get()<<endl;
}

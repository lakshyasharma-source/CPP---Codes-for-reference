#include<iostream>
using namespace std;
class par
{
public:
	par()
	{
		cout<<"par constructor:\n";	
	}
	~par()
	{
		cout<<"par destructor:\n";	
	}
};
class par1
{
public:
	par1()
	{
		cout<<"par1 constructor:\n";	
	}
	~par1()
	{
		cout<<"par1 destructor:\n";	
	}
};
class der:virtual public par,virtual public par1
{
public:
	der()
	{
		cout<<"der constructor:\n";	
	}
	~der()
	{
		cout<<"der destructor:\n";	
	}
};
int main()
{
	der d;
}

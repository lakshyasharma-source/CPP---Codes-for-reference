
#include<iostream>
using namespace std;
class par1
{
public:
	par1()
	{
		cout<<"par1 constructor\n";
	}
	~par1()
	{
		cout<<"par1 destructor\n";
	}
};
class par2
{
public:
	par2()
	{
		cout<<"par2 constructor\n";
	}
	~par2()
	{
		cout<<"par2 destructor\n";
	}
};
class par3
{
public:
	par3()
	{
		cout<<"par3 constructor\n";
	}
	~par3()
	{
		cout<<"par3 destructor\n";
	}
};

class deri:public par1,virtual par2,public par3
{
public:
	deri()
	{
		cout<<"deri constructor\n";
	}
	~deri()
	{
		cout<<"deridestructor\n";
	}
};


int main()
{
	deri o;

}

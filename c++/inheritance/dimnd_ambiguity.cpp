#include<iostream>
using namespace std;
class person
{
protected:
	int a;
public:
	person()
	{
		cout<<"person default:\n";
	}
	person(int x)
	{
		a=x;
		cout<<"person parameter:\n"<<a<<endl;
	}
};
class men: virtual public person
{
protected:
	int b;
public:
	men()
	{
		cout<<"men default:\n";
	}
	men(int x):person(x)
	{
		b=x;
		cout<<"men parameter:\n"<<b<<endl;
	}
};
class women: virtual public person
{
protected:
	int c;
public:
	women()
	{
		cout<<"women default:\n";
	}
	women(int x):person(x)
	{
		c=x;
		cout<<"women parameter:\n"<<c<<endl;
	}
};
class child:public men,public women
{
protected:
	int d;
public:
	child()
	{
		cout<<"child default:\n";
	}
	child(int x):men(x),women(x)
	{
		d=x;
		cout<<"child parameter:\n";
	}
};
int main()
{
	child d(10);
}

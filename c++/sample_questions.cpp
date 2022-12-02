#include<iostream>
using namespace std;
/*class emp
{
public:
	emp()
	{
		emp e;
		cout<<"cranes"<<endl;
	}
	~emp()
	{
		cout<<"varsity"<<endl;	
	}
};
int main()
{
	emp e;
	cout<<"size = "<<sizeof(e)<<endl;
}
class test
{
	static int a;
	int b;

};
int test::a;
int main()
{
	test t;
	cout<<"size = "<<sizeof(t)<<endl;
}
class test
{
	int id;
	static int count;
public:
	test()
	{
		count++;
		id=count;
		cout<<"constructor called = "<<id<<endl;
	}
	~test()
	{
		cout<<"destructor = "<<id<<endl;
	}
};
int test::count=0;
int main()
{
	test a[3];
	return 0;
}
*/
class base
{
public:
	int fun()
	{
		cout<<"base : fun() called"<<endl;
	}
	int fun(int i)
	{
		cout<<"base : fun(int i) is called"<<endl;
	}
};
class der:public base
{
public:
/*	using base::fun;
	int fun(char x)
	{
		cout<<"derived : fun(char) called"<<endl;
	}
*/
};
int main()
{
	der d;
	d.fun();
	return 0;
}

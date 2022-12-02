#include<iostream>
using namespace std;
class A
{
	int a;
public:
	A()
	{
		a=123;
	}
	void show()
	{
		cout<<"a-->"<<a<<endl;
	}
	friend class B;
};
class B
{
public:
	void store(A o)
	{
		o.a=25;
	}
};
int main()
{	
	A o1;
	B o2;
	o2.store(o1);
	o1.show();
}

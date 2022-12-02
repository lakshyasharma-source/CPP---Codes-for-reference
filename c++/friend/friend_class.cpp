
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	A()
	{
		a=12;
	}
	void shw()
	{
		cout<<"in class a:a--> "<<a<<endl;
		
	}
	friend class B;
};
class B
{
	int b;
	public:
	void show(A x)
	{
		x.a=24;
		cout<<"A::a-->"<<x.a<<endl;
	}
};
int main()
{
	A a;
	B b;
	b.show(a);
	a.shw();
}

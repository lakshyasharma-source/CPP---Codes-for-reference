#include<iostream>
using namespace std;
class ope
{
	int a,b;
public:
	ope()
	{
	}
	ope(int x,int y)
	{
		a=x,b=y;
	}
	void show()
	{
		cout<<"a-->"<<a<<"\n b--->"<<b<<endl;
	}
	friend void operator +(ope&,ope&);
};
void operator +(ope &o1,ope &o2)
{
	ope o3;
	o3.a=o1.a+o2.a;
	o3.b=o1.b+o2.b;
//		cout<<"a-->"<<o3.a<<"\n b--->"<<o3.b<<endl;
	o3.show();
}
int main()
{
	ope o1(2,3);
	ope o2(3,2);
	o1.show();
	o2.show();
	o1+o2;
}

#include<iostream>
using namespace std;
class oper
{
	int a,b;
public:
	oper(int x=0,int y=0)
	{
		a=x,b=y;
	}
	oper operator+(oper m)
	{
		oper o;
		o.a=a+m.a;
		o.b=b+m.b;
		return o;
	}
	void display()
	{
		cout<<a <<"  "<<b<<endl;
	}
};
int main()
{
	oper o1(10,20);
	o1.display();
	oper o2(1,2);
	o2.display();
	oper o3=o1+o2;
	o3.display();
	
}

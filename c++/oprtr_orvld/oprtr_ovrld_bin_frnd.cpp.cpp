
#include<iostream>
using namespace std;
class ope
{
public:
	int a,b;
public:
	ope()
	{
	
	}
	ope(int x,int y)
	{
		a=x,b=y;
	}
	void display()
	{
		cout<<" a == >"<<a<<"b == >"<<b<<endl;
	}	
	  void operator+(const ope&);

};
void ope::operator +(const ope&o2)
{
	ope o3;
	o3.a=a+o2.a;
	o3.b=b+o2.b;
	cout<<o3.a<<endl<<o3.b<<endl;
}
int main()
{
	ope o1(4,5);
	ope o2(4,5);
	o1.display();
	o2.display();
	o1+o2;
}

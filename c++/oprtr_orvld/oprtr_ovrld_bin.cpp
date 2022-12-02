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
		cout<<a<<"\n"<<b<<endl;
	}
	void operator+(ope&);
};
void ope::operator+(ope&o2)
{
	ope o3;
	o3.a=a+o2.a;
	o3.b=b+o2.b;
	o3.show();
}
int main()
{
	ope o1(2,3);
	ope o2(2,3);
	o1.show();
	o2.show();
	o1+o2;
}

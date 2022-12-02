#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	test(int x=0,int y =0)
	{
		a=x,b=y;
	}
	static test setA()
	{
		//return *this;
	}
	test setB()
	{
		b=30;
		cout<<"b = "<<b<<endl;
		//return *this;
	}
	void display()
	{
		cout<<a<<"  "<<b<<endl;
	}
};
int main()
{
	test o(2,3);
	o.display();
	o.setA().setB();
	o.display();
}

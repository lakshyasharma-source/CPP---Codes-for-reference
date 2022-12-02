#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	test(int x,int y)
	{
		a=x;
		b=y;
	}
	test& setx(int x)
	{
		a=x;
		return *this;
	}
	test& sety(int y)
	{
		b=y;
		return *this;
	}
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	test o1(10,20);
	o1.setx(5).sety(7);
	o1.display();
}

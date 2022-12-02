#include<iostream>
using namespace std;
class test
{
	int a;
public:
	test(int x=0)
	{
		a=x;
	}
//	friend void operator =(test,test);
void operator =(test &m2)
{
	a=m2.a;
}
	void show()
	{
		cout<<"a = "<<a<<endl;
	}
};
int main()
{
	test o1(10);
	test o2;
	o2=o1;
	o1.show();
	o2.show();
}

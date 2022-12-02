#include<iostream>
using namespace std;
class ope
{
	int a;
public:
	ope(int x=0)
	{
		a=x;
	}
	void show()
	{
		cout<<a<<endl;
	}
	void operator =(ope &m)
	{
		a=m.a;
		cout<<"assgnmnet operator invoked:\n";
//		return*this;
	}
};
int main()
{
	ope o1(100);
	o1.show();
	ope o2,o3;
	o2=o1;
	o3=o1;
	o2.show();
	o3.show();
}

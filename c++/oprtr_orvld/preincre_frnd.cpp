#include<iostream>
using namespace  std;
class ope
{
	int a;
public:
	ope(int x=0)
	{
		a=x;
	}
	void display()
	{
		cout<<" a = "<<a<<endl;
	}
	 ope& operator++();
};
ope& ope::operator++()
{
	++a;
	return *this;
}
int main()
{
	ope o1(10);
	o1.display();
	ope o2=++o1;
	o2.display();
}

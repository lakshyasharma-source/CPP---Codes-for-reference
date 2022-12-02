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
	void operator++();
};
void ope::operator++()
{
	++a;;
}
int main()
{
	ope o1(10);
	o1.display();
	++o1;
	o1.display();
}

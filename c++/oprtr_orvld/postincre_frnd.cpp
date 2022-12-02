#include<iostream>
using namespace std;
class opr
{
	int a;
public:
	opr(int x=0)
	{
		a=x;
	}
	void display()
	{
		cout<<"a = "<<a<<endl;
	}
	friend void operator++(opr &,int);
};
void operator++(opr &m,int g)
{
	m.a++;
}
int main()
{
	opr o1(10);
	o1.display();
	o1++;
	o1.display();
}

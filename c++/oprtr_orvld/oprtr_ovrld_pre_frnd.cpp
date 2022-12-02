
#include<iostream>
using namespace std;
class ope
{
	int a;
public:
	ope(int x)
	{
		a=x;
	}
	friend void operator ++(ope&,int);
	void display()
	{
		cout<<"a -->" <<a<<endl;
	}
};
void operator ++(ope &m,int v)
{
	m.a=m.a++;
}
int main()
{
	ope o1(5);
	o1.display();
	o1++;
	o1.display();
}

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
	void operator++(int g);
};
void opr::operator++(int g)
{
	a++;
	
}
int main()
{
	opr o1(10);
	o1.display();
	o1++;
	o1.display();
}

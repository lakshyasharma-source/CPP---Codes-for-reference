
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
	void operator ++(int );
	void display()
	{
		cout<<"a -->" <<a<<endl;
	}
};
void ope::operator ++(int v)
{
	a=a++;
}
int main()
{
	ope o1(5);
	o1.display();
	o1++;
	o1.display();
}

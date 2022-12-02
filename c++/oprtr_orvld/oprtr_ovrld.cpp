#include<iostream>
using namespace std;
class ope
{
private:
	int a,b;
public:
	ope(int x,int y)
	{
		a=x,b=y;
	}
	void operator -();
	void display();

};
	void ope::operator -()
	{
		a=-a,b=-b;
	}
	void ope::display()
	{
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}
int main()
{
	ope o1(5,6);
	o1.display();
	-o1;
	o1.display();
}

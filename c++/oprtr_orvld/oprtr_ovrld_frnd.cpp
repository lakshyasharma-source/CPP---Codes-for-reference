#include<iostream>
using namespace std;
class ope
{
private:
	int a,b;
public:
	ope(int a,int b)
	{
		this->a=a,this->b=b;
	}
	friend void operator -(ope&);

	void display()
	{
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}

};
	void operator -(ope &m)
	{
		m.a=-m.a,m.b=-m.b;
	}
int main()
{
	ope o1(5,6);
	o1.display();
	-o1;
	o1.display();
}

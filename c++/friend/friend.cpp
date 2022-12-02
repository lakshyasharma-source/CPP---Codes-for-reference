#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	test(int a=0,int b=0)
	{
		this->a=a;
		this->b=b;
	}
	friend void display();
};
	void display(test m)	
	{
		cout<<" a = "<<m.a<<" b = "<<m.b<<endl;
	}
int main()
{
	test o(10,20);
	display(o);
}

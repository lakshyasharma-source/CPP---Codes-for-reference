#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	test(int x=0,int y=0)
	{
		a=x,b=y;
	}
	void display()
	{
		cout<<a<<" "<<b<<endl;
	}
	friend void show();
};
void show()
{
	test o;
	cout<<o.a<<" "<<o.b<<endl;
}
int main()
{
	show();	
}

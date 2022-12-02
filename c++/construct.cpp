

#include<iostream>
using namespace std;
class test
{
	int a;
public:
	test(int a)//constructor with argument
	{
		this->a=a;
	}
	test(test &m)
	{
		a=m.a;
	}
	test()//default constructor
	{
		cout<<"default constructor\n";
	}
	~test()//destructor
	{
		cout<<"destructor\n";
	}
	void print()
	{
		cout<<"a==> "<<a<<endl;
	}
};
int main()
{
	test o4;
	test o1(6);
	test o3(o1);
	test o2(5);
	o2.print();
	o3.print();
}

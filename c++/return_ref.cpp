#include<iostream>
using namespace std;
class test
{
	int a;
public:
	test(int x=0)
	{	a=x;	}
	void display(){	cout<<a<<endl;	}
	friend void operator +(test&,test&);
	friend void operator ++(test);
};
void operator ++(test m)
{
	cout<<"++:\n";
	++m.a;
	m.display();
}
void operator +(test &m1,test &m2)
{
	cout<<"+:\n";
	test m;
	m.a=m1.a+m2.a;
	m.display();
//	return m;
}
int main()
{
	test o1(10);
	test o2(20);
	++(o1+o2);

}


#include<iostream>
using namespace std;
class test
{
	int a;
	char c;
public:
	test()
	{
	
	}
	test(int x,char ch)
	{
		a=x;
		c=ch;
	}
	friend void print(test);
};
void print(test m)
{
	cout<<m.a<<"\n"<<m.c<<endl;

}
int main()
{
	test o(5,'f');
	print(o);	

}

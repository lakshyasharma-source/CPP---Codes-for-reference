#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class test
{
	char name[20];
	int size;
public:
	test()
	{
		cout<<"default constructor:\n";
	}
	test(const char*s,int v)
	{
		strcpy(name,s);
		size=v;
	}
	void display()
	{
		cout<<"name = "<<name<<" size = "<<size<<endl;
	}
	void * operator new(size_t sz)
	{
		cout<<"overloaded size = "<<sz<<endl;
		void *p=::new test;
		return p;
	}
	void operator delete(void *p)
	{
		cout<<"delete :\n";
		free(p);
	}

};
int main()
{
	test *p=new test("cranes",23);
	p->display();
}

#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class test
{
	char *name;
	int size;
public:
	test(const char *ptr)
	{
		size = strlen(ptr)+1;
		cout<<"size = "<<size<<endl;
		name=(char*)malloc(size);
		strcpy(name,ptr);
	}
	void display(){	cout<<name<<endl;	}
	test(test &m)
	{
		cout<<"copy constructor:\n";
		size=m.size;
		cout<<m.size<<endl;
		cout<<m.name<<endl;
		name=(char*)malloc(size);
		strcpy(name,m.name);
	}
	~test()
	{
		free(name);
		cout<<"destructor:\n";
	}
};
int main()
{
	test o1("cranes");
	test o2(o1);
//	test o1();
	o1.display();	
	o2.display();	
}

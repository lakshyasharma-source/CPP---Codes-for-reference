
#include<iostream>
#include<string.h>
using namespace std;
class test
{
	int a;
	char name[20];
public:
	/*test()
	{
		cout<<"default constructor\n";
	}*/
	test(int x=0,char *s=NULL)
	{	
		a=x;
		strcpy(name,s);		
		cout<<"para constructor\n";
	}
	test(test &o)
	{
		a=o.a;
		strcpy(name,o.name);
		cout<<"copy constructor\n";
	}
	void print()
	{
		cout<<"name-->"<<name<<" a-->"<<a<<endl;
	}
	~test()
	{
		cout<<"destructor\n";
	}

};
int main()
{
	char ch[20]="cranes";
	test o1;
	test o2(12,ch);
	test o3(o2);
	o1.print();
	o2.print();
	o3.print();
}

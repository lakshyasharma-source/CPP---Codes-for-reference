#include<iostream>
using namespace std;
class base
{
	public:
	int a;
	base()
	{
		a=10;
	}
};
class der:public base
{
	public:
	int a;
	der()
	{
		a=20;
	}
};
int main()
{
	base *ptr;
	der dobj;
	cout<<dobj.a<<endl;
	ptr=&dobj;
	cout<<ptr->a<<endl;
}

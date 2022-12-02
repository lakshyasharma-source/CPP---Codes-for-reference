#include<iostream>
using namespace std;
class par
{
public:
	par()
	{
		cout<<"in par constructor:\n";
	}
	virtual void show()=0;
	
};
class der:public par
{
public:
	der()
	{
		cout<<"der constructor:\n";
	}
	void show()
	{
		cout<<"in derived :\n";
	}
};
int main()
{
	par *p=new der;
	p->show();
}

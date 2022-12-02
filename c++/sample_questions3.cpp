
#include<iostream>
using namespace std;
class base
{
public:
	virtual void show(){	cout<<"in base:\n";	}
};
class der:public base
{
public:
	void show(){	cout<<"in derived:\n";	}
};
int main()
{
	base *ptr=new der;
	ptr->show();
	return 0;
}

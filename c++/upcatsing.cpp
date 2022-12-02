
#include<iostream>
using namespace std;
class base
{
	int x;
public:
	virtual void show()=0;

};
class derived:public base
{
	int a;
public:
	derievd(int x)
	{	
		a=x;
	}
	void show()
	{
		cout<<"in side derived class:\n";
	}
	
};
int main()
{
	base *bp;
	derived d;
//	derived o1(12);
	bp=&d;
	bp->show();
}

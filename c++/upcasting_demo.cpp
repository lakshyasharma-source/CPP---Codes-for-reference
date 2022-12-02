
#include<iostream>
using namespace std;
class par
{
protected:
	int a;
public:
	virtual void show()=0;
};
class child:public par
{
	int x;	
public:
	child(int a1,int b)
	{
		x=a1;
		a=b;
	}
	void show()
	{
		cout<<"x = "<<x<<"a = "<<a<<endl;
	}
};
int main()
{
	par *po;
	child co(10,20);
	po=&co;//upcasting
	po->show();
}

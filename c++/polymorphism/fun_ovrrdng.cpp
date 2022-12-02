#include<iostream>
using namespace std;
class par
{
	int a;
public:
	virtual void fun()
	{
		cout<<"in parent:"<<endl;
	}
};
class der:public par
{
	int b;
public:
	virtual void fun()
	{
		cout<<"in child:"<<endl;
	}
};
int main()
{
	der d;
	par& p=d;
	p.fun(); //10);
}


#include<iostream>
using namespace std;
class base
{
public:
	virtual void fun();
};
 void base:: fun()
	{
		cout<<"in base\n";
	}
class derived:public base
{
private:
	void fun()
	{
		cout<<"in derived\n";
	}
};
int main()
{
	base *bp;
	derived obj;
	bp=&obj;//upcasting(pointing base pointer to derived object)
	bp->fun();
}
//runtime polymorphism
//vitual functions by default will bind at runtime
//runtime binding is also calles as late binding
//late binding is also called as dynamic binding

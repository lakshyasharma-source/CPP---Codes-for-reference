

#include<iostream>
//in abstract class we can have pointer variable of abstract class but cannot have normal variable(thz prgrm will wrk without any error)
using namespace std;
class A
{
public:
	virtual void show()=0;

};
class B:public A
{
public:
	void show()
	{
		cout<<"in derived\n";
	}
};
int main()
{
	A *bp=new B;
	bp->show();

}

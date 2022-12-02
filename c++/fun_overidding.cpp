
#include<iostream>
using namespace std;
class par
{
	int a;
public:
	virtual  void show()
	{
		cout<<"inside par:\n";
	}

};
class child:public par
{
	int x;
public:
	 void show()
	{
		cout<<"inside child:\n";
	}
};
int main()
{
	/*par *po;
	child co;
	po=&co;
	po->show();
	co.show();*/
	par p;
	child c;
	p.show();
	c.show();
	
}


#include<iostream>
using namespace std;
class par
{
public:
	virtual void show()=0;
};
class child:public par
{
	int a;
public:
	child(int x)
	{
		a=x;
	}
	void show()
	{
		cout<<"inside show a= "<<a<<endl;
	}

};
int main()
{
	par *t;
	child o(10);
	t=&o;
	t->show();
}

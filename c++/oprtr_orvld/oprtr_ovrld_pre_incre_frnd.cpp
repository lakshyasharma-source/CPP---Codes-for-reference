
#include<iostream>
using namespace std;
class ope
{
	int x;
public:
	ope()
	{
		x=5;
	}
	void show()
	{
		cout<<"x--> "<<x<<endl;
	}
	
	friend void operator ++(ope&);
};
void operator ++(ope &a)
{
	a.x=++a.x;
}
int main()
{
	ope o1;
	o1.show();
	++o1;
	o1.show();
	
}

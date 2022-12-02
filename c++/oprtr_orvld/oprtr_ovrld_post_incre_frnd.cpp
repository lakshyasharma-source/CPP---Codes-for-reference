#include<iostream>
using namespace std;
class ope
{
	int x;
public:
	ope()
	{
		x=12;
	}
	void show()
	{
		cout<<"x--> "<<x<<endl;
	}
	friend void operator ++(ope&,int);
};
void operator ++(ope &m,int v)
{
	m.x=m.x++;
}
int main()
{
	ope o1;
	o1.show();
	o1++;
	o1.show();
}

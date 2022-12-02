#include<iostream>
using namespace std;
class ope
{
	int x;
public:
	ope()
	{
		x=6;
	}
	void show()
	{
		cout<<"x--> "<<x<<endl;
	}
	void operator ++();
};
void ope::operator ++()
{
	x=++x;
}
int main()
{
	ope o;
	o.show();
	++o;
	o.show();
}

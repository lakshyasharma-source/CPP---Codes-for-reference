
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
	void operator ++(int);
};
void ope::operator ++(int v)
{
	x=x++;
}
int main()
{
	ope o1;
	o1.show();
	o1++;
	o1.show();
}

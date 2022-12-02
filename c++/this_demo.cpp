
#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	void set(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
void print(void)
{
	cout<<"a--> "<<a<<"b---> "<<b<<endl;
}
};
int main()
{
	test o1,o2;
	o1.set(5,6);
	o2.set(6,5);
	o1.print();
	o2.print();
}

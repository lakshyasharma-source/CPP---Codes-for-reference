
#include<iostream>
using namespace std;
class test
{
	int a,b;
public:
	test()
	{
		a=10,b=20;
		cout<<"constructor\n";
	}
	void show()const
	{
		cout<<a<<" "<<b<<endl;
	}
};
int main()
{
	const test o1;
	o1.show();
}

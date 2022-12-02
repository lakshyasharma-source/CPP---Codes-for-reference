
#include<iostream>
using namespace std;
class test
{
	const int a,b;
	int c;
public:
	test():a(2),b(3),c(4)
	{
		cout<<"constructor\n";
		cout<<a<<b<<c<<endl;
	}
	void print()
	{
	}

};
int main()
{
	test o1;
	o1.print();

}

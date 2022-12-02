
#include<iostream>
using namespace std;
class test
{
private:
	int a;
public:
	void print();
};
	void test::print()
	{
		cout<<"in print\n";
	}	
int main()
{
	test o1;
	o1.print();
}

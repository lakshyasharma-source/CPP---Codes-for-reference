#include<iostream>
using namespace std;
class test
{
	static int a;
public:
	static void print()
	{
		cout<<"a===> "<<a<<endl;
	}
};
int test::a=20;
int main()
{
	test o1,o2;
	test::print();
	test::print();


}

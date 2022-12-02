
#include<iostream>
using namespace std;
template <class t>
class test
{
	t a;
public:
	test(t x)
	{
		a=x;
	}
	void show();
};
template <class t>
void test<t>::show()
{
	cout<<"a-->"<<a<<endl;
}
int main()
{
	test <int>o1(12);
	test <char>o2('s');
	test <float>o3(12.43);
	test <double>o4(456.87);
	o1.show();
	o2.show();
	o3.show();
	o4.show();
}

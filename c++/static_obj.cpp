
#include<iostream>
using namespace std;
class test
{
	int i;
public:
	test()
	{
		i=10;
		cout<<"constructor\n";
	}
	~test()
	{
		cout<<"destructor\n";
	}

};
void fun()
{
 	static test o1;
}
int main()
{
	int a=0;
	if(a== 0)
		fun();
	cout<<"end\n";

}

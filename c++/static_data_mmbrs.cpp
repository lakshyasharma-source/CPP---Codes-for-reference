
#include<iostream>
using namespace std;
class x
{
	static int a; 
public:
	x()
	{
		cout<<"constructo\n";
	}

	void print()
	{
		cout<<"a--> "<<a<<endl;;
	}
};
int x::a=20;
int main()
{
	x o1;
	o1.print();
}

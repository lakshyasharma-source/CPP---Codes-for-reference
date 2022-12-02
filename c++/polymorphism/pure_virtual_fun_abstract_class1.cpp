

#include<iostream>

//cant create object of abstract class(this programm will give error)
using namespace std;
class test
{
	int x;
public:
	virtual void show()=0;
	int get()
	{
		return x;
	}
};
int main()
{
	test t;

}

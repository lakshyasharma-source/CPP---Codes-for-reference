
#include<iostream>

///if we are not overriding abstract of base class the derived class also will become abstract class(thz program will the error)
using namespace std;
class base
{
public:
	virtual void show()=0;
};
class derived :public base
{
};
int main()
{
	derived d;

}

#include<iostream>
using namespace std;
class par
{
public:
	void show()
	{
		cout<<"in parent:\n";
	}	
};
class der1:virtual public par
{
};
class der2:virtual public par
{
};
class der:public der1,public der2
{
};
int main()
{
	der o;
	o.show();
}

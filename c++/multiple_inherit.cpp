
#include<iostream>

#include<string.h>
using namespace std;
class par1
{
protected:	
	char clr[20];

};
class par2
{
protected:	
	float height;

};
class child:public  par1,public par2
{
public:
	void chi_init()
	{
		strcpy(clr,"black");
		height=5.5;
	}
	void print()
	{
		cout<<"clr-->"<<clr<<"\nheight-->"<<height<<endl;
	}

};
int main()
{
	child c;
	c.chi_init();
	c.print();
}

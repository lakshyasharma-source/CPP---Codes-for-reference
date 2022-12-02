
#include<iostream>
#include<string.h>
using namespace std;
class fruit
{
protected:
	char clr[20]; 
	char shape[20];
	int size;
	void print()
	{
		cout<<"clr-->"<<clr<<"\n"<<"shape-->"<<shape<<"\n"<<"size-->"<<size<<endl;	
	}

};
class apple:public fruit
{
public:
	void apple_init()
	{
		strcpy(clr,"red");
		strcpy(shape,"round");
		size=10;
		cout<<"apple_details\n";
		print();
	}	

};
class banana:public fruit
{
public:
	void banana_init()
	{
		strcpy(clr,"yellow");
		strcpy(shape,"pendric");
		size=4;	
		cout<<"banana_details\n";
		print();
	}
};
int main()
{
	apple o;
	o.apple_init();
	banana b;
	b.banana_init();
}

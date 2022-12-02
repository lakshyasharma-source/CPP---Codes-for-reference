
#include<iostream>
#include<string.h>
using namespace std;

class par
{
protected:
	char name[20];

	int roll;
};
class ch1:protected par
{
protected:
	int sub1,sub2,sub3;

public:
	void print(int num)
	{
		strcpy(name,"loki");
		roll=num;
	}
};
class ch2:public  ch1
{
public:	
	void initialize()
	{
		sub1=50;
		sub2=60;
		sub3=70;
	}
	int total()
	{
		cout<<"name-->"<<name<<"roll-->"<<roll<<endl;
		return sub1+sub2+sub3;
	}

};
int main()
{
	ch2 o1;
	o1.print(415);
	o1.initialize();
	cout<<"total-->"<<o1.total()<<endl;
}	

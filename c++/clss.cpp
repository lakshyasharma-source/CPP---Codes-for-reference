#include<iostream>
using namespace std;
class test
{
	int x,y;
public:
	test(int a=0,int b=0)
	{
		x=a,y=b;
		cout<<"def,para:\n";
	}
	void display()
	{
		cout<<x<<"  "<<y<<endl;
	}
};
int main()
{
	
	test *ptr=new test;
	test *ptr1=new test(10,20);
	ptr->display();
	ptr1->display();
}

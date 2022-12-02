#include<iostream>
using namespace std;
class test
{
	int roll;
public:
	test(int r):roll(r){}
	void fun()const
	{
		(const_cast<test*>(this))->roll=5;
	}
	int getroll(){	return roll;	}
};
int main()
{
	test s(3);
	cout<<"old roll number : "<<s.getroll()<<endl;
	s.fun();
	cout<<"new roll number : "<<s.getroll()<<endl;
}

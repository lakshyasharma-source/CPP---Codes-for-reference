#include<stdio.h>
#include<stdlib.h>
using namespace std;
class test
{
	int x;
public:
	test(int x=0){	this->x=x;}
	void change(test *t){	this = t;}
	void print(){	cout<<x<<endl;}
};
int main()
{
	test o(5);
	test *ptr=new(10);
	o.change(ptr);
	o.print();
}

#include<iostream>
using namespace std;
int main()
{
	int *p=new int(10);
//	*p=10;
	cout<<"*p= "<<*p;
	delete p;
}

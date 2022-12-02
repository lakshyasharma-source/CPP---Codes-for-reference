#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	int &ref1=a;
	cout<<"ref1 = "<<ref1<<endl;
	ref1=b;
	cout<<"ref1 = "<<ref1<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;

}

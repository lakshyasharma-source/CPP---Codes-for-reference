
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
int main()
{
	int a=10,b=20;
	swap(a,b);
	cout<<"a= "<<a<<"b= "<<b<<endl;
	int c=23;
	int &d=c;
	cout<<"d= "<<d<<endl;
}

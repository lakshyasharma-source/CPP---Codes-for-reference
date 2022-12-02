#include<iostream>
using namespace std;
int sum(int a,int b,float c=0,int d=10)
{
	return a+b+c+d;
}
int main()
{
	cout<<"sum-->"<<sum(2,4)<<endl;
	cout<<"sum-->"<<sum(2,4,5)<<endl;
	cout<<"sum-->"<<sum(2,4,6,7)<<endl;
}

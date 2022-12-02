

#include<iostream>
using namespace std;
int sum()
{
	cout<<"in thix function"<<endl;	
}
int sum(int a,int b)
{
	return a+b;
}
int sum(int c)
{

	return c;
}
int sum(int a,int b,double d)
{
	return a+b+d;
}
int main()
{
	cout<<"sum1---->:"<<sum()<<endl;
	cout<<"sum1---->:"<<sum(5,7)<<endl;
	cout<<"sum2---->:"<<sum(12.43)<<endl;
	cout<<"sum3---->:"<<sum(12.43,65.76,56)<<endl;
}

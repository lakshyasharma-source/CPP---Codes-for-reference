

#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(char a,int b)
{
	return a+b;
}
int main()
{
	cout<<"sum-->"<<sum(12,54)<<endl;
	cout<<"sum-->"<<sum(12,54,76)<<endl;
	cout<<"sum-->"<<sum('c',54)<<endl;

}

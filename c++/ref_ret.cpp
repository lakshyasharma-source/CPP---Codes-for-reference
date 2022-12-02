#include<iostream>
using namespace std;
int a;
int& fun()
{
	return a;
}
int main()
{
	fun()=10;
	cout<<a<<endl;
}

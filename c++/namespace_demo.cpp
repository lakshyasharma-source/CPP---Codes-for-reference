#include<iostream>
using namespace std;
namespace first
{
	int x;
	void fun()
	{
		cout<<"first namespace"<<endl;	
	}
}
using namespace first;
namespace second
{
	int x=12;
	void fun()
	{
		cout<<"second namespace"<<endl;	
	}
}
int main()
{
	fun();
	fun();
	cout<<"first-->"<<first::x<<endl;;
	cout<<"second-->"<<second::x<<endl;;

}


#include<iostream>
using namespace std;
class par
{
	int a,b;
public:
	par(int a1,int b1)
	{
		a=a1,b=b1;
		cout<<"\nbase constructor\n";
		cout<<"a-->" <<a<<"\nb-->"<<b<<endl;;
	}

};
class child:public par
{
	int x,y;
public:
	child(int x1,int y1,int m,int n):par(m,n)
	{
		x=x1,y=y1;
		cout<<"\nderived constructor\n";
		cout<<"x-->" <<x<<"\ny-->"<<y<<endl;;
	}

};
int main()
{
	child o(10,20,30,40);

}


#include<iostream>
using namespace std;
class point
{
public:
	point()
	{
		cout<<"normal"<<endl;
	}
	point(const point&t)
	{
		cout<<"cpoy"<<endl;
	}

};
int main()
{
	point *t1,*t2;
	t1=new point();
	t2=new point(*t1);
	point t3=*t1;
	point t4;	
	t4=t3;
}
	

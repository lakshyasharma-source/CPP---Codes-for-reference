

#include<iostream>
using namespace std;

class out
{
	int a,b,c;
	public:
	out()
	{
		a=4,b=3,c=2;
	
	}
	friend int mean(out);
	
};
out obj;
int mean(out m)
{
	
	int res=(m.a+m.b+m.c)/3;
	return res;
}
int main()
{
	out d;
	cout<<"mean of three numbers-->"<<mean(d);

}

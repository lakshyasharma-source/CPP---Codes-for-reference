

#include<iostream>
using namespace std;
class st
{
	int code;
	static int count;
public:
	st()
	{
		cout<<"construcotr\n";
		code=++count;
	}
	void showcode()
	{
		cout<<"code-->"<<code<<endl;
	}
	static void showcount()
	{
		cout<<"count-->"<<count<<endl;
	}

};
int st::count;
int main()
{
	st o1,o2,o3;
	o1.showcode();
	o1.showcount();
	o2.showcode();
	o2.showcount();

}

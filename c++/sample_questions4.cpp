#include<iostream>
using namespace std;
class test
{
	int a,b;
	void display();
public:
	test():a(10),b(20){
		display();
	}
};
void test::display(){	cout<<a<<" "<<b<<endl;	}
int main()
{
	test o;
	cout<<"szie = "<<sizeof(bool)<<endl;
}

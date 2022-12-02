#include<iostream>
using namespace std;
class test
{
	int id;
public:	
	test(int i){	id=i;	}
	void show(){	cout<<id<<endl;	}

};
int main()
{
	test a[2];
	a[0].show();
	a[1].show();

}

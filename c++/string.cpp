#include<iostream>
#include<string>
using namespace std;
int main()
{
	string st1="hello";
	string st2="world";
	string st3;
	int len;
	st3=st1;//strcopy
	cout<<"st3-->"<<st3<<endl;
	st3=st1+st2;//strcat
	cout<<"st3-->"<<st3<<endl;
	len=st3.size();//strlen
	cout<<"len-->"<<len<<endl;
	return 0;
}

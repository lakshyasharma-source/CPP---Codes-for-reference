#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="cranes";
	string s2="varsity";
	string s3;
	s3=s2;
	cout<<"s3  = "<<s3<<endl;
	s3=s1+s2;
	cout<<"s3  = "<<s3<<endl;
	int sz=s3.size();
	cout<<"sz = "<<sz<<endl;
	int res=s2.compare(s1);
	cout<<"res = "<<res<<endl;
}

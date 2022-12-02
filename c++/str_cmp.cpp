#include<iostream>
#include<string>
using namespace std;
void compare1(string s1,string s2)
{
	if(s1.compare(s2) <0)	
		cout<<s1<<"smaller than"<<s2<<endl;
	if(s1.compare(s1) ==0)	
		cout<<s1<<"equal to"<<s2<<endl;
	else
		cout<<"string didnt match"<<endl;
		
}
int main()
{
	string s1="cranes",s2="varsity";
	compare1(s1,s2);
}

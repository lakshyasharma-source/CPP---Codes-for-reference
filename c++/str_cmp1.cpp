#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter the strings:\n";
	cin>>s1;
	cin>>s2;
	
	int res=s1.compare(s2);
	if(res == 0)
		cout<<"both atrings are same:\n";
	else if(res>0)	
		cout<<"s1 greater: "<<res<<endl;
	else
		cout<<"s2 greater: "<<res<<endl;
		
}

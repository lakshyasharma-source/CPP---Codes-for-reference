#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ifstream file;
	file.open("file2");
	bool res=file.is_open();
	if(res)
	{
		getline(file,str);
		cout<<str<<"\n";
		cout<<"file isn opened:\n";
	}
	else
		cout<<"file isnot opened:\n";

}

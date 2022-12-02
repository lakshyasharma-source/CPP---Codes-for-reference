#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file;
	file.open("file1");
	bool res=file.is_open();
	if(res)
	{
		cout<<"file is opened:\n";
		file<<"cranes varsity:\n";
	}
	else
		cout<<"file is not opened:\n";

	file.close();
}

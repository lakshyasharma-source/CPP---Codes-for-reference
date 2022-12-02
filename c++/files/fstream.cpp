
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch[200];
	fstream iofile;
	iofile.open("file_io1");
	iofile<<"cranes varsity"<<endl;
	iofile.seekp(0);
//	iofile>>ch;
	iofile.getline(ch,20);
	cout<<"read data is = "<<ch<<endl;
	iofile.close();

}

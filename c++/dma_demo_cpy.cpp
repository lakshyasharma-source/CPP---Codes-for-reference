
#include<iostream>
#include<cstring>
using namespace std;
class String
{
private:
	int size;
	char *s;
public:
	String (const char*str=NULL);//constructor
/*	~String()//destructor
	{
		delete [] s;	
	}*/
//	String (const String&);//copy constructor
	void print()//function to print string
	{
		cout<<"s ==>"<<s<<endl;
	}
	void change(const char*);//function to change
};
String::String(const char*str)
{
	size=strlen(str);
	s=new char[size+1];
	strcpy(s,str);
}

void String::change(const char*str)
{
	delete []s;
	size=strlen(str);
	s=new char[size+1];
	strcpy(s,str);
}
/*String::String(const String &old_str)
{
	size=old_str.size;
	s=new char[size+1];
	strcpy(s,old_str.s);
}*/
int main()
{

	String str1("cranes");
	String str2=str1;
	
	str1.print();
	str2.print();
	str1.change("cranes varsity");
	str1.print();
	str2.print();
	
}



#include<iostream>
#include<cstring>
using namespace std;
class student
{
protected:
	char name[30];
	int id;
};
class dept:public student
{
	char branch[20];
public:
	dept(const char *n,int i,const char*b)
	{
		strcpy(name,n);
		id=i;
		strcpy(branch,b);
	}
	dept(dept &m)
	{
		strcpy(name,m.name);
		id=m.id;
		strcpy(branch,m.branch);
	}
	void show()
	{
		cout<<"name = "<<name<<" branch = "<<branch<<" id = "<<id<<endl;
	}
};
int main()
{
	dept o("loki",415,"ece");
	dept o1("loki",415,"ece");
	o.show();
	o1=o;
	o1.show();
}

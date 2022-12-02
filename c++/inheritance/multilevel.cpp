#include<iostream>
#include<cstring>
using namespace std;
class student
{
protected:
	char name[30];
	int id;
	float fee;
};
class eng_stu:public student
{
protected:
	float p_m;
	char p_t[30];
public:
	eng_stu(float m,const char*t,const char*n,int i,float f)
	{	
		p_m=m;
		strcpy(p_t,t);
		strcpy(name,n);
		id=i;
		fee=f;
	}	
};
class ece_stu:public eng_stu
{
	char branch[30];
public:
	ece_stu(const char* b):eng_stu(98,"Gsm","raghu",415,4500)
	{
		strcpy(branch,b);
	}
	void display()
	{
		cout<<p_m<<" "<<p_t<<" "<<name<<" "<<id<<" "<<fee<<" "<<branch<<endl;
	}
};
int main()
{
	ece_stu o("ece");
	o.display();
}

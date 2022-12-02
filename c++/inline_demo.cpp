
#include<iostream> 
#include<stdio.h>
inline void swap(int &,int &);
int main()
{
	int a=10,b=30;
	swap(a,b);
	printf("%d %d\n",a,b);
}
inline void swap(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

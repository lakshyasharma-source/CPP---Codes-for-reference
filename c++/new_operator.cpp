#include<iostream>
using namespace std;
int main()
{
/*	int *p=new int[1];
	for(int i=0;i<5;i++)
		cin>>p[i];
	for(int i=0;i<5;i++)
		cout<< p[i] <<" ";
	delete[] p;*/
/*	
	int*p=new int(12.43);
	cout<<"*p="<<*p;
	delete p;
*/
	int a[4];
	int i;
	for(i=0;i<4;i++)
		cout<<*(a+i)<<" ";
	int *pp=NULL;
	int j;
	int (*p)[3]=new int[2][3];
	for(int i=0;i<2;i++)
	{
		for(j=0;j<3;j++);
			cin>>*(*(p+i)+j);
//	cin>>p[i][j];
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++);
			cout <<*(*(p+i)+j)<<" ";
		cout<<endl;
	}
	delete p;
	delete pp;

}

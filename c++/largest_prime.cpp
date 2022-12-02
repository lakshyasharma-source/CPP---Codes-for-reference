#include<iostream>
using namespace std;
int prime(int n)
{
	for(int j=2;j<n;j++)
	{
		if(n%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int max=0;
	for(int i=0;i<1000000;i++)
	{
		if(prime(i))
		{
			cout<<i<<endl;
			if(max < i)
				max=i;
		}
	}
	cout<<"largest = "<<max<<endl;
}

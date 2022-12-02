#include<stdio.h>
using namespace std;
int& fun()
{
	int x=50;
	return x;
}
int main()
{
	fun()=100;
	printf("in main:\n");
	printf("%d\n",fun());
}

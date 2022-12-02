//#include<iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;
int main()
{
	int a=10;
	scanf(" %d",&a);
	int *p=(int*)malloc(a);
	printf(" %d" , *p);
}

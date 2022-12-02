#include<iostream>
#include <string>
using namespace std;
template<class T>
auto add(T a,T b) -> decltype(a + b)
{
	return a+b;
}
int main()
{
	cout<<add(string("Chand") , string("Basha"))<<endl;
}

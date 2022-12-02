
#include<iostream>
using namespace std;
template <class t>
t mymax(t x,t y)
{
	return x>y?x:y;
}
int main()
{
	cout<<mymax<int>(3,7)<<endl;
	cout<<mymax<double>(56.87,12.43)<<endl;
	cout<<mymax<char>('c','a')<<endl;

}

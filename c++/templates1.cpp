#include<iostream>
using namespace std;
template <class i>
i add(i x,i y)
{

	return x+y;
}
template <typename c>
c sub(c x,c y)
{
	return x-y;
}
int main()
{
	cout<<add<int>(5,6)<<endl;;
	cout<<sub<int>(5,2)<<endl;;
}
//templates are expanded at compile time
//compiler does type checking before template expansion
//will be hving one function definition but internally hvng multiple function calls

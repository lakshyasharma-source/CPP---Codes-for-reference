

#include<iostream>
using namespace std;
namespace x
{
	int a=10;
}
namespace y
{
	int a=30;
}
int main()
{
	std::cout<<"a--> "<<x::a<<"a -->"<<y::a<<endl;

}

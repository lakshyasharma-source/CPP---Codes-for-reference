#include<iostream>
#include<thread>
using namespace std;
void func()
{
	cout<<"in func:\n";
	cout<<"func id = "<<this_thread::get_id()<<endl;
}
int main()
{
	thread t(func);
//	t.join();
	t.detach();
	cout<<"in main:\n";
	cout<<"main id = "<<this_thread::get_id()<<endl;
}

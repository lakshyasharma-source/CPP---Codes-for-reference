#include"iostream"
using namespace std;
class box
{
public:
	box()
	{
		cout<<"constructor is called"<<endl;
	}
	~box()	
	{
		cout<<"destructor is called"<<endl;
	}
};
int main()
{
	box*p=new box[4];//creating 4 objects of class
	delete []p;//deleting box

	cout<<"sizeo-->"<<sizeof(box)<<endl;
}

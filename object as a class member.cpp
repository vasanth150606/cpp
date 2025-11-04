#include<iostream>
using namespace std;
class A
{
	public:
		int x;
A()
{
	x=20;
	cout<<"pakistan";
		}		
};
class B
{
	public:
		int y;
		A a;
		B()
		{
			cout<<"\n INDIA";
		}
void show()
{
	cout<<"\nX="<<a.x<<"\tY="<<y;
}
};
int main()
{
	B b;
	b.show();
	return 0;
}
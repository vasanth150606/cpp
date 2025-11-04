//fibonacci number
#include<iostream>
using namespace std;
int main()
{
	int t1=0,t2=1,t3,i,n;
	cout<<"enter n values";
	cin>>n;
	
	cout<<t1<<t2;
	for(i=3;i<=n;i++)
	{
		t3=t1+t2;
		cout<< t3 ;
		t1=t2;
		t2=t3;
	}
}
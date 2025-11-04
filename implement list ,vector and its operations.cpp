//Implement list ,vector and it's operations
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
	vector<int>v={10,20,30};
	cout<<"Vector elements:";
	for(int x:v)
	cout<<x<<"";
	cout<<endl;
	v.push_back(40);
	v.pop_back();
	cout<<"After operations,Vector";
	for(int x:v)
	cout<<x<<"";
	cout<<endl;
	list<int>l={5,10,15};
	cout<<"\nList element:";
	for(int x:l)
	cout<<x<<""<<endl;
	l.push_back(20);
	l.pop_front();
	cout<<"After operations,List:";
	for(int x:l)
	cout<<x<<""<<endl;
	return 0;
}
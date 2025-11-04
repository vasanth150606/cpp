#include<bits\stdc++.h>
//inline function to add two integers
using namespace std;
inline int add(int a, int b){
	return a+b;
}
inline double add(double a, double b){
	return a+b;
}
inline int add(int a,int b, int c){
	return a+b+c;
}
int main()
{
	cout<<"add(5,20)="<<add(5,20)<<endl;
	cout<<"add(2.3,3.4)="<<add(2.3,3.4)<<endl;
	cout<<"add(1,2,3)="<<add(1,2,3)<<endl;
}
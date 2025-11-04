//exception handling
#include<iostream>
using namespace std;
int divide(int a,int b){
	if(b==0){
		throw"divison by zero error!";
	
	}
	return a/b;
}
int main(){
	int x=10,y=0;
	try{
		int result=divide(x,y);
		cout<<"result:"<<result<<endl;
	}
	catch(const char*msg){
		cout<<"exception caught:"<<msg<<endl;
	}
	cout<<"program continues after exception handling"<<endl;
	return 0;
}
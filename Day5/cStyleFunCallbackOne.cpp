#include <iostream>
using namespace std;

void fun();
void funOne();

void funCaller(void (*)());

int main(){
	funCaller(fun);
	funCaller(funOne);
}
void funCaller(void (*fPtr)()){
	cout<<"Before functionality...."<<endl;
	fPtr();
	cout<<"After ...............................\n";
}

void fun(){
	cout<<"fun() called"<<endl;
}
void funOne(){
	cout<<"funOne() called"<<endl;
}

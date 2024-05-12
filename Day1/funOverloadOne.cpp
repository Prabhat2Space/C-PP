#include<iostream>
using namespace std;

void fun();
void fun(int);
void fun(double);

int main(){
	fun();
	fun(10);
	fun(123.345);
}

void fun(){
	cout<<"void fun()"<<endl;
}
void fun(int){
	cout<<"void fun(int)"<<endl;
}
void fun(double){
	cout<<"void fun(double)"<<endl;
}


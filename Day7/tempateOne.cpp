#include <iostream>
using namespace std;

template<typename T>
void fun(T var){
	cout<<"var: "<<var<<endl;
}

int main(){
	fun(10); //implicit call 
	fun(10.234f);
	fun(10.234);
	fun('a');
	fun("Some string here");
}


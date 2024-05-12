#include <iostream>
using namespace std;


void fun(char *str){
	cout<<"void fun(char *)"<<endl;
	str[0]='N';
	cout<<"Printinga ..."<<str<<endl;
}

int main(){

	char str[] = "Testing some strings here";
	fun(str);
}

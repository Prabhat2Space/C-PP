#include <iostream>
using namespace std;

int gVar = 100; //global variable
void fun(); //global function declaration


int main(){
	int gVar = 200;	
	cout<<"Global variable..."<<::gVar<<"\tLocal : "<<gVar<<endl;
	fun(); //globally declared function
}

void fun(){ //definition
	cout<<"In fun()\n";
}

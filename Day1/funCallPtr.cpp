/*
 *	Call by address 
 *
 */

#include <iostream>
using namespace std;

void change(int *);

int main(){
	int var=10;
	cout<<"Before Var: "<<var<<endl;
	change(&var);
	cout<<"After Var: "<<var<<endl;
}

void change(int *xVar){
	*xVar+=20;
}

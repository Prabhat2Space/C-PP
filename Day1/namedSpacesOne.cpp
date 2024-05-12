#include <iostream>
using namespace std;

namespace Mine{
	int gVar = 100; 
	void fun(); 
}

namespace Yours{
	int gVar = 130; 
	void fun(); 
}

int main(){
	int gVar = 200;	
	cout<<"Local: "<<gVar<<endl;
	cout<<"Mine::gVar "<<Mine::gVar<<endl;
	cout<<"Yours::gVar "<<Yours::gVar<<endl;
	Mine::fun();
	Yours::fun();
}

void Mine::fun(){ //definition
	cout<<"In Mine::fun()\n";
}

void Yours::fun(){ //definition
	cout<<"In Yours::fun()\n";
}

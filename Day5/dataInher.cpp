#include <iostream>
using namespace std;

class Base{
	int bData;
};

class Derived:public Base{
	int dData;	
};

int main(){
	cout<<"Base: "<<sizeof(Base)<<endl; 	
	cout<<"Derived: "<<sizeof(Derived)<<endl; 	
}

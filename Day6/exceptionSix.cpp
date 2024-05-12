#include <iostream>
using namespace std;

int main(){
	cout<<"Statement #1"<<endl;
	try{
		cout<<"Statement #2"<<endl;
		throw 10.234;
		cout<<"Statement #3"<<endl;
	}catch(int){
		cout<<"Caught int type"<<endl;
	}catch(float){
		cout<<"Caught float type"<<endl;
	}catch(...){
		cout<<"Caught unknown type"<<endl;
	}
	cout<<"Statement #4"<<endl;
}

#include <iostream>
using namespace std;

int main(){
	cout<<"Statement #1"<<endl;
	try{
		cout<<"Statement #2"<<endl;
		throw 10;
		cout<<"Statement #3"<<endl;
	}catch(int){
		cout<<"Caught int type"<<endl;
	}
	cout<<"Statement #4"<<endl;
}

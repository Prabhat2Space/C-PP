#include <iostream>
using namespace std;

class Simple{
	int data;
public:
	Simple& getData(int x=10){
		data=x;
		return *this;
	}
	void printData(){
		cout<<"Data: "<<data<<endl;
	}		
};

int main(){
	Simple obj;
	obj.getData(100).printData(); //method chaining 
}

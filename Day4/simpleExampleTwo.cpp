#include <iostream>
using namespace std;

class Simple{
	int data;
public:
	void getData(int data=10){
		this->data=data;
	}
	void printData(){
		cout<<"Data: "<<data<<endl;
	}		
};

int main(){
	Simple obj;
	obj.getData(100);
	obj.printData(); 
}

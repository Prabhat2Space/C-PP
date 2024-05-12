#include <iostream>
using namespace std;

class Simple{
	int data;
	void getData(int x=10){
		data=x;
	}
	void printData(){
		cout<<"Data: "<<data<<endl;
	}		

	friend int main();
};

int main(){
	Simple obj;
	obj.getData(100);
	obj.printData();
}

#include <iostream>
using namespace std;

class MyException{
	int num;
	string mesg;
public:
	MyException(int errNo, const char *msg):num(errNo),mesg(msg){
		cout<<"Constructor called"<<endl;
	}
	void what(){
		cout<<"num: "<<num<<"\tType : "<<mesg<<endl;
	}

	~MyException(){cout<<"Destruction called..."<<endl;}
};

int main(){
	try {
		cout<<"statement #1"<<endl;
		throw new MyException(404, "Resource NOT AVAILABLE");
		cout<<"statement #2"<<endl;
	}catch(MyException *ePtr){
		ePtr->what();
		delete ePtr;
	}
	cout<<"statement #3"<<endl;
}

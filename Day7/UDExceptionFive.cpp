#include <iostream>
#include <exception>
using namespace std;

class OurException{
public:
	virtual void what() {}
};
class YourException:public OurException{
	int num;
public:
	YourException(int errNo):num(errNo){}
	void what(){
		cout<<"num: "<<num<<endl;
	}
};

class MyException:public OurException{
	int num;
	string mesg;
public:
	MyException(int errNo, const char *msg):num(errNo),mesg(msg){}
	void what(){
		cout<<"num: "<<num<<"Type: "<<mesg<<endl;
	}
};

int main(){
	try {
		cout<<"statement #1"<<endl;
		throw OurException();
		cout<<"statement #2"<<endl;
	}catch(OurException &eObj){
		eObj.what();
	}
	cout<<"statement #3"<<endl;
}

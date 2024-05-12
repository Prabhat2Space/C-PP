#include <iostream>
#include <exception>
using namespace std;

class MyException:public exception{
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
		throw MyException(404, "Resource NOT AVAILABLE");
		cout<<"statement #2"<<endl;
	}catch(MyException &eObj){
		eObj.what();
	}catch(exception &eObj){
		eObj.what();
	}
	cout<<"statement #3"<<endl;
}

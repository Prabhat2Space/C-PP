#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0): data(x) {}
	void operator()(){
		cout<<"operator() called..."<<data<<endl;
	}
	void operator()(int x){
		cout<<"operator("<<x<<") called..."<<data<<endl;
	}

};
void fun(Test &obj){
	cout<<"Before.....\n";
	obj();
	obj(100);
	cout<<"After....\n";
}
int main(){
    Test objA=20;
	fun(objA);

	Test objB = 90;
	fun(objB);
}

#include <iostream>
using namespace std;


class A{
	int data1, data2;
	void fun(){cout<<"void fun()"<<endl; }
	void fun(int x){cout<<"void fun("<<x<<")"<<endl; } 
	void fun(int x,int y){cout<<"void fun("<<x<<","<<y<<")"<<endl; }

	friend class B;
};

class B{
	A aObj;
public:
	B(int x=10, int y=20){
		aObj.data1 = x;
		aObj.data2 = y;
	}

	void callFuns(){
		aObj.fun();
		aObj.fun(10);
		aObj.fun(10,20);
	}

};


int main(){
	B bObj(100,200);
	bObj.callFuns();
}

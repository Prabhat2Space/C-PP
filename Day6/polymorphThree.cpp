#include <iostream>
using namespace std;
class B{
public:
	virtual	void fun(){cout<<"B::fun()"<<endl;}
};
class D:public B{
public:
	void fun(){cout<<"D::fun()"<<endl;}
};
void funCaller(B *bPtr){
	bPtr->fun();
}
int main(){
	//using objects through pointer in-directly
	B b;
	D d;
	funCaller(&b);
	funCaller(&d);
}

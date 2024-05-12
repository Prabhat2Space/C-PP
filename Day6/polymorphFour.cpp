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
void funCaller(B &bRef){
	bRef.fun();
}
int main(){
	//using reference variables 
	B b;
	D d;
	funCaller(b);
	funCaller(d);
}

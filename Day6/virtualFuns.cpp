#include <iostream>
using namespace std;
class B{
public:
	virtual	void fun(){cout<<"B::fun()"<<endl;}
	virtual void funOne(){cout<<"B::funOne()"<<endl; }
	virtual void funTwo(){cout<<"B::funTwo()"<<endl; }
};
class D:public B{
public:
	void fun(){cout<<"D::fun()"<<endl;}
	void funTwo(){cout<<"D::funTwo()"<<endl; }
};

typedef void (*FPTR)();



int main(){
	B b;
	long *vptr = (long *)(&b);
	FPTR *vtbl = (FPTR *) (*vptr);
	vtbl[0](); //
	vtbl[1](); //
	vtbl[2](); //

}

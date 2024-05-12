#include <iostream>
using namespace std;

class Test{
	int data;
public:
    Test(int x=0):data(x){cout<<"Test("<<x<<")"<<endl;}
	~Test(){cout<<"~Test()"<<endl;}
	void disp(){cout<<"Test::disp() "<<data<<endl;}
};

class Pointer{//wrapper class
	Test *ptr;
public:	
	Pointer(int x=0):ptr(new Test(x)){}
	~Pointer(){delete ptr;}
	Test *operator->(){
		return ptr;
	}
};


void recur(int num){
	Pointer obj(num);	
	obj->disp();
	if (num <= 5){
		cout<<num<<"  ";
		recur(num+1);
		cout<<num<<"  ";
	}
	throw num;
}
int main(){
	try {
		recur(1);	
	}catch(int x){
		cout<<"Caught "<<x<<endl;
	}
}

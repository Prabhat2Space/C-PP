#include <iostream>
using namespace std;

class B{
	int a;
};

class B1:virtual public B{
	int b;
};

class B2:public virtual B{
	int c;
};
class D:public B1, public B2{
	int d;
};

int main(){
	cout<<"B: "<<sizeof(B)<<endl;
	cout<<"B1: "<<sizeof(B1)<<endl;
	cout<<"B2: "<<sizeof(B2)<<endl;
	cout<<"D: "<<sizeof(D)<<endl;
}



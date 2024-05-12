#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0): data(x) {}
	void operator()(){
		cout<<"operator() called..."<<data<<endl;
	}
};


int main(){
    Test obj=100;
	obj();
}

#include <iostream>
using namespace std;
class Test{
	int data;
public:
	Test(int x=0):data(x){}
	friend ostream& operator<<(ostream& out, Test obj){
		out<<"Test data: "<<obj.data;
		return out;
	}
};

template<typename T>
void fun(T var){
	cout<<"var: "<<var<<endl;
}

int main(){
	fun(10); //implicit call 
	fun(10.234f);
	fun(10.234);
	fun('a');
	fun("Some string here");
	Test tObj(100);
	fun(tObj);
}


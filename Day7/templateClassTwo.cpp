#include <iostream>
using namespace std;

template <typename T>
class Test{
	T data;
public:
	Test(T arg=T()):data(arg){}
	void disp();
};

template <typename T>
void Test<T>::disp(){
		cout<<"Data: "<<data<<endl;
}

int main(){
	Test<int> iObj(100);
	Test<double> dObj(10234.345);
	Test<const char *> pcObj("Whatever you want");

	iObj.disp();
	dObj.disp();
	pcObj.disp();
}

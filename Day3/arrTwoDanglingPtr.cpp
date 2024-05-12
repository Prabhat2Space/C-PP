#include <iostream>
using namespace std;

class Array{
	int *arr; //a pointer variable
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);
	~Array();

	void fillArray(int first);
	void printArray();
};
		

int main(){
	Array a=10;
	a.fillArray(101);
	a.printArray();
	{
		Array b = a;
		b.printArray();
	} //object b goes out of scope

	cout<<"After deletion..."<<endl;
	a.printArray(); //object a pointer arr is dangling pointer 
}

Array::Array(int sz):size(sz){
	arr = new int[size];
}
Array::Array(int sz, int first):size(sz){
	arr = new int[size];
	fillArray(first);
}
Array::~Array(){
	delete []arr;
}

void Array::fillArray(int first){
	for(int cnt = 0; cnt <size; ++cnt)
		arr[cnt] = first + cnt;
}
void Array::printArray(){
	cout<<"Array: ";
	for(int cnt = 0; cnt <size; ++cnt)
		cout<<arr[cnt]<<"  ";
	cout<<endl;
}


#include <iostream>
using namespace std;

class Array{
	int *arr; //a pointer variable
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);
	Array(const Array &);
	~Array();
	int & operator[] (int idx){
		return arr[idx];
	}

	void fillArray(int first);
	void printArray();
};
		

int main(){
	Array a(10,1001);
	a.printArray();
	a[3] = 4000; //a.operator[](3) --> a.arr[3] = 4000
	a.printArray();
}

Array::Array(const Array &rhsObj):size(rhsObj.size){
	if (size > 0){
		arr = new int[size];
		for(int cnt=0;cnt < size; ++cnt)
			arr[cnt] = rhsObj.arr[cnt];
	}else
		arr = nullptr;//NULL
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


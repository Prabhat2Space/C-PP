#include <iostream>
using namespace std;

#ifndef SIZE
#define SIZE 10
#endif

class Array
{
  int arr[SIZE];
  int size;
public:
  Array(); //constructor --> (No argument ) --> Default constructor
  void fillArray (int first);
  void printArray ();
};

int main(){
	Array obj; //default constructor gets called
	obj.fillArray(101);
	obj.printArray();
}
Array::Array(){
	cout<<"Enter size: (less than "<<SIZE<<"): ";
	cin>>size;
	if (size>SIZE)
		size = SIZE;
}

void Array::fillArray (int first){
	for(auto i = 0; i<size; ++i)
		arr[i] = i + first;
}
void Array::printArray (){
	cout<<"Arr: ";
	for(auto i =0; i< size; ++i)
		cout<<arr[i]<<"  ";
	cout<<endl;
}

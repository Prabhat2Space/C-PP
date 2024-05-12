#include <iostream>
using namespace std;

void createNPrintArr(int);

int main(){
	createNPrintArr(10); //
	createNPrintArr(20); //
	createNPrintArr(-20); //
	createNPrintArr(50);
}

void createNPrintArr(int size){
	if (size < 0)
		throw size;

	int *arr = new int[size];
	for (int cnt=0; cnt <size; cnt++)
		arr[cnt] = 101 + cnt;
	cout<<"arr: ";
	for (int cnt=0; cnt <size; cnt++)
		cout<<arr[cnt]<<" ";
		cout<<endl;
		delete[] arr;

}


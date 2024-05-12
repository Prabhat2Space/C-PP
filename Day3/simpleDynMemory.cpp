#include <iostream>
using namespace std;

void createNFillArray(int sz, int first=101);

int main(){
	createNFillArray(5);
	createNFillArray(15);
	createNFillArray(55);
}

void createNFillArray(int sz, int first){
	int *iPtr = new int[sz];//here size is not fixed....
	for(int i=0;i<sz;++i)
		iPtr[i] = first	+i;
	
	cout<<"Arr: ";
	for(int i=0;i<sz;++i)
		cout<<iPtr[i]<<" ";
	cout<<endl;

	delete []iPtr;
}


#include <iostream>
#include <fstream>
using namespace std;


int main(){
	char ch;
	ifstream in("iosThree.cpp");
	while (in.get(ch))
		cout<<ch;
}


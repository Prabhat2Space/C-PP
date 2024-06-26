#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	friend void print(ostream &out, Test &obj);
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

void print(ostream &out, Test &obj){
	out<<"data: "<<obj.data<<endl;
}

Test& operator++(Test &lhs){ //pre-fix
	lhs.data+=1;
	return lhs;
}
Test operator++(Test&lhs, int){ 
	Test temp(lhs);
	lhs.data+=1;
	return temp;
}
					
int main(){
	Test a, b = 10, c;
					
	a = ++b;
	print(cout,a);
	print(cout,b);
				
	c = b++;
	print(cout,c);
	print(cout,b);
}
				

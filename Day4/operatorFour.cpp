#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	void print(){cout<<"data: "<<data<<endl;}
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

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
	a.print();
	b.print();
				
	c = b++;
	c.print();
	b.print();
}
				

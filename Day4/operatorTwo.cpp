#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	void print(){cout<<"data: "<<data<<endl;}
	friend Test operator+(Test&lhs, Test &rhs);
	friend Test& operator-(Test &);
};
Test operator+(Test& lhs, Test &rhs){
	   Test temp;
	   temp.data = lhs.data + rhs.data;	
	   return temp;
}
Test& operator-(Test &lhs){ //unary - operator
	   lhs.data = -lhs.data;	
	   return lhs;
}
int main(){
	Test a = 100; 
	Test b = 50;
	Test c = a + b;

	a.print();
	b.print();
	c.print();
	(-c).print();
}

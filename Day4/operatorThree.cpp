#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	void print(){cout<<"data: "<<data<<endl;}
	Test& operator++();
	Test operator++(int);
};

Test& Test::operator++(){ //pre-fix
	data+=1;
	return *this;
}
Test Test::operator++(int){ //post-fix dummy integer to tell compiler its post-fix..
	Test temp(*this);
	data+=1;
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
				

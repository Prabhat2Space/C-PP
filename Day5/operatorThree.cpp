#include <iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	friend ostream& operator<<(ostream &, Test &);
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

ostream& operator<<(ostream &out, Test &obj){
	out<<"data: "<<obj.data;
	return out;
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
	cout<<a<<endl;//operator<<(cout,a).operator<<(endl);
 	cout<<b<<endl;				
	c = b++;
	cout<<c<<endl;
	cout<<b<<endl;
}
				

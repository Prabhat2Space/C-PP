#include <iostream>
using namespace std;

class Employee{
private: //By default private in classes 
	const int id;
	string name;
	double sal;
public:	
	Employee(int =0);//function with default arguments
	Employee(int, const char *,double);//3 parameterized c'tor
	void acceptDetails();
	void dispDetails();
};

int main(){
	Employee a(1001,"AAAAA",19273.345);
	a.dispDetails();
}

Employee::Employee(int var):id(var){	
}

Employee::Employee(int var, const char *nm,double sl):id(var),name(nm),sal(sl){

}
void Employee::acceptDetails(){
	cout<<"Enter name and salary: ";
	cin>>name>>sal;
}
void Employee::dispDetails(){
	cout<<"id: "<<id<<"\tname: "<<name<<"\tSalary: "<<sal<<endl;
}



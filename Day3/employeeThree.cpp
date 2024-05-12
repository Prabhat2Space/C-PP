#include <iostream>
using namespace std;

class Employee{
private: //By default private in classes 
	const int id;
	string name;
	mutable double sal;
public:	
	Employee(int =0);//function with default arguments
	Employee(int, const char *,double);//3 parameterized c'tor
	void acceptDetails();
	void dispDetails()const ;
	void dispDetails();
};

int main(){
	const Employee a(1001,"AAAAA",19273.345); //object is const here
	a.dispDetails(); //can call const member functions only 

	Employee b(1002);
	b.acceptDetails();
	b.dispDetails();
}

Employee::Employee(int var):id(var){	
}

Employee::Employee(int var, const char *nm,double sl):id(var),name(nm),sal(sl){

}
void Employee::acceptDetails(){
	cout<<"Enter name and salary: ";
	cin>>name>>sal;
}
void Employee::dispDetails()const {
	cout<<"const function id: "<<id<<"\tname: "<<name<<"\tSalary: "<<sal<<endl;
	sal+=10000;
	cout<<"const function id: "<<id<<"\tname: "<<name<<"\tSalary: "<<fixed<<sal<<endl;
}

void Employee::dispDetails(){
	cout<<"Non-const function id: "<<id<<"\tname: "<<name<<"\tSalary: "<<fixed<<sal<<endl;
	sal+=10000;
	cout<<"Non-const function id: "<<id<<"\tname: "<<name<<"\tSalary: "<<fixed<<sal<<endl;
}



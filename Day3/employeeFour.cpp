#include <iostream>
using namespace std;

class Employee{
private: //By default private in classes 
	const int id; //const
	string name;//normal
	mutable double sal;//mutable
	static int idCounter;//declaration --> static 
public:	
	Employee();//function with default arguments
	Employee(const char *,double);//3 parameterized c'tor
	void acceptDetails();
	void dispDetails()const ;
	void dispDetails();
	static int getIDCounter(){return idCounter;}
};

int main(){
	const Employee a("AAAAA",19273.345); //object is const here
	a.dispDetails(); //can call const member functions only 

	Employee b;
	b.acceptDetails();
	b.dispDetails();
}

Employee::Employee():id(Employee::idCounter++){	
}

Employee::Employee(const char *nm,double sl):id(Employee::idCounter++),name(nm),sal(sl){

}
void Employee::acceptDetails(){
	cout<<"Enter name and salary for ("<<idCounter - 1<<"): ";
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
int Employee::idCounter=10001; //definition

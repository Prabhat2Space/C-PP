#include <iostream>
using namespace std;
//C++ Style of using Structures
class Employee{
	int id;
	string name;
	double salary;
public:
	void getDetails();
	void printDetails(); 
};

int main(){
	Employee obj;
	obj.getDetails();
	obj.printDetails();
}
void Employee::getDetails(){
	cout<<"Enter id, name and salary: ";
	cin>>id>>name>>salary;
}
void Employee::printDetails(){
	cout<<"Id: "<<id<<"\tName: "<<name<<"\tSalary: "<<salary<<endl;
}


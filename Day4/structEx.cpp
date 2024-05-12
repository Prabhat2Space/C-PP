#include <iostream>
using namespace std;
//C++ Style of using Structures
struct Employee{
	int id;
	string name;
	double salary;

	void getDetails();
	void printDetails(); 
};

int main(){
	Employee arr[5];
	for(auto i = 0; i < 5; ++i)
		arr[i].getDetails();
	
	for(auto i = 0; i < 5; ++i)
		arr[i].printDetails();
}
void Employee::getDetails(){
	cout<<"Enter id, name and salary: ";
	cin>>id>>name>>salary;
}
void Employee::printDetails(){
	cout<<"Id: "<<id<<"\tName: "<<name<<"\tSalary: "<<salary<<endl;
}


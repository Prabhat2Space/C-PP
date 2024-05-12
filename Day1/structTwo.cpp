#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	double salary;
};
void getDetails(Employee &);//call by reference 
void printDetails(Employee); //call by value 

int main(){
	Employee var;
	getDetails(var); 
	printDetails(var);
}

void getDetails(Employee &var){
	cout<<"Enter id, name and salary: ";
	cin>>var.id>>var.name>>var.salary;
}
void printDetails(Employee var){
	cout<<"Id: "<<var.id<<"\tName: "<<var.name<<"\tSalary: "<<var.salary<<endl;
}


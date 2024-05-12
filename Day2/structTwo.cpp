#include <iostream>
using namespace std;
//C Style of using Structures
struct Employee{
	int id;
	string name;
	double salary;
};
void getDetails(Employee &);//call by reference 
void printDetails(Employee); //call by value 

int main(){
	Employee arr[5];
	for(auto i = 0; i < 5; ++i)
		getDetails(arr[i]); //
	
	for(auto i = 0; i < 5; ++i)
		printDetails(arr[i]);//
}

void getDetails(Employee &var){
	cout<<"Enter id, name and salary: ";
	cin>>var.id>>var.name>>var.salary;
}
void printDetails(Employee var){
	cout<<"Id: "<<var.id<<"\tName: "<<var.name<<"\tSalary: "<<var.salary<<endl;
}


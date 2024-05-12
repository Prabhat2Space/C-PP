#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	double salary;
};
Employee getDetails();
void printDetails(Employee);

int main(){
	Employee arr[5];
	for (int cnt =0; cnt < 5; ++cnt)
		arr[cnt] = getDetails();
	for (int cnt =0; cnt < 5; ++cnt)
		printDetails(arr[cnt]);
}

Employee getDetails(){
	Employee var;
	cout<<"Enter id, name and salary: ";
	cin>>var.id>>var.name>>var.salary;
	return var;
}
void printDetails(Employee var){
	cout<<"Id: "<<var.id<<"\tName: "<<var.name<<"\tSalary: "<<var.salary<<endl;
}


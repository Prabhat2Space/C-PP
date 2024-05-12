#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x=0):data(x), next(nullptr){}
};
		
class LinkedList{
	Node *first;
public:
	LinkedList();
	~LinkedList();
			
	void addAtBeg(int);
	void addAtEnd();
	void addAtPos(int);
	void disp();
};


int main(){
	LinkedList a;
	for(int cnt=0;cnt < 10; ++cnt)
		a.addAtBeg(101 + cnt);
	a.disp();
}

LinkedList::LinkedList(){
	first = nullptr;
}
LinkedList::~LinkedList(){

}
			
void LinkedList::addAtBeg(int data){
	Node *New = new Node(data);
	if (first == nullptr)
		first = New;
	else{
		New->next = first;
		first = New;
	}
}
void LinkedList::disp(){
	Node *temp = first;
	cout<<"List: ";
	while(temp!=nullptr){
		cout<<temp->data<<"  ";
		temp = temp->next;
	}
	cout<<endl;
}

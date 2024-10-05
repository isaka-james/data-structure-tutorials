#include<iostream>
using namespace std;

struct Node{
	int n;
	Node* a;
};

void addAtEnd(Node*& head, int num){
	Node* newNode = new Node();
	newNode->n = num;
	newNode->a= nullptr;

	if(head==nullptr){
		head=newNode;
	}else{
		Node* temp = head;
		while(temp->a!=nullptr){
			temp = temp->a;
		}
		temp->a = newNode;
	}
}

void display(Node* head){
	Node* temp = head;
	while(temp->a!=nullptr){
		cout<<"The value is: "<<temp->n<<endl;
		temp = temp->a;
	}
}

int main(){
	Node* head = nullptr;

	addAtEnd(head,40);
	addAtEnd(head,30);
	addAtEnd(head,11);
	addAtEnd(head,5);

	display(head);

	return 0;
}

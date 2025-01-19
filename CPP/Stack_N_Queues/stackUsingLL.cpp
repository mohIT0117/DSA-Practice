#include <bits\stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
	
};

class Stack
{
	Node* head;
	int size;

public:
	
	Stack(){
		head = NULL;
		size = 0;
	}

	int getSize(){
		return size;
	}

	bool isEmpty(){
		return head==NULL;
	}
	
	int top(){
		return head->data;
	}

	void push(int element){

		Node *newNode = new Node(element);

		if (head == NULL)
		{
			head = newNode;
		}
		else{

			newNode->next = head;
			head = newNode;

		}

		size += 1;

	}

	int pop(){
		if (isEmpty())
		{
			cout<<"\nStack is Empty !";
			return -1;
		}

		Node* ans = head;
		head = head->next;
		size--;

		return ans->data;

	}

};

int main(int argc, char const *argv[])
{
		Stack s;


	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout<<"\n"<<s.top();

	cout<<"\n"<<s.pop();
	cout<<"\n"<<s.pop();
	cout<<"\n"<<s.pop();

	cout<<"\n"<<s.getSize();
	cout<<"\n"<<s.isEmpty();

	return 0;
}
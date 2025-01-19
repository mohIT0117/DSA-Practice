#include <bits/stdc++.h>
using namespace std;



class Node{
	
	public:
		int data;
		Node* next;

		Node(int data){
			this->data = data;
			this->next = NULL;
		}
	
};

class Queue{

	Node *head;
	Node *tail;
	int size;

	public:

		Queue(){
			head = NULL;
			tail = NULL;
			size = 0;
		}

		int getSize(){
			return size;
		}

		bool isEmpty(){
			return size==0;
		}

		int front(){

			if (isEmpty())
			{
				cout<<"Queue is Empty !"<<endl;
				return 0;
			}
		
			return head->data;
		}

		void enqueue(int element){
			
			Node* newNode = new Node(element);
			
			if(isEmpty()){
				head = newNode;
				tail = newNode;
			}

			else{
				tail->next = newNode;
				tail = newNode;
			}
			size++;
		}

		int dequeue(){

			if (isEmpty())
			{
				cout<<"Queue is Empty !"<<endl;
				return 0;
			}

			Node *ans = head;
			head = head->next;
			size--;
			return ans->data;

		}



};	
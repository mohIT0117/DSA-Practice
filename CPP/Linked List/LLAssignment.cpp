#include <bits/stdc++.h>
#include "linkedList.cpp"

using namespace std;

void print(Node* head){

	cout<<endl;

	Node* temp = head;

	while(temp != NULL){

		cout<<temp->data<<"->";;
		temp = temp->next;
	}
}



Node* takeInput(){

	int data ;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;

	while(data != -1){
	
	Node* newNode = new Node(data);

	if(head == NULL){
		head = newNode;
		tail = newNode;
	}

	tail -> next = newNode;
	tail = tail -> next;
	
	cin>>data;
	}
	return head;


}


/*


Node* evenAfterOdd( Node* head ){

	Node* temp = head;

	Node* oddHead = NULL; 
	Node* oddTail = NULL;
	Node* evenHead = NULL;
	Node* evenTail = NULL;

	while( temp != NULL ){

		//Even
		if( (temp->data % 2) == 0){
			if(evenHead == NULL){
				evenHead = temp;
				evenTail = temp;
				
			}
			else{
				evenTail->next = temp;
				evenTail = evenTail->next;
			}
			
		}

		else{
			if (oddHead == NULL)
			{
				oddHead = temp;
				oddTail = temp;
			}
			else{
				oddTail->next = temp;
				oddTail = oddTail->next;
			}

		}
		temp = temp->next;
	}



	if (oddHead == NULL)
	{
		oddHead = evenHead; 
		evenTail->next = NULL;
	}

	else if (evenHead == NULL)
	{
		oddTail->next = NULL;
	}

	else{
	oddTail->next = evenHead;
	evenTail->next = NULL;
	}

	return oddHead;
}

*/


Node* deleteEveryNnodes(Node* head){

	Node* temp = head;
	
	Node* t1 = head;
	Node* t2 = head;

	

	while( temp != NULL){

		int m = 2, n = 3;

		for (int i = 0; i < m; i++)
		{
			t1 = t1->next;
		}

		for (int j = 0; i < n; i++)
		{
			
		}
	
	}
}



/*
Node* swap(Node* head, int pos1, int pos2){

	Node* temp = head;

	Node* tail = NULL;

	Node* t1;
	Node* t2;

	while(temp != NULL && pos1!=0){
		t1 = t1->next;
		temp = temp->next;
		pos1--;
	}

	temp = head;

	while(temp != NULL && pos2!=0){
		t2 = t2->next;
		temp = temp->next;
		pos2--;
	}

	tail = t1->next;
	t1->next = t2;
	t2 = tail;
}

*/


int main(int argc, char const *argv[])
{
	Node* head;

	head = takeInput();
	
	print(head);

	// head = evenAfterOdd(head);

	head = deleteEveryNnodes(head);
	
	// head = swap(head,2,3);

	print(head);

	return 0;
}
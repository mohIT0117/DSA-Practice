#include <iostream>
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


int NoOfNodes(Node* head){
	int count = 0;

	if(head == NULL){
		return 0;
	}

	count = NoOfNodes(head -> next) + 1;

	
}


int dataAtPos(int pos, Node* head)
{

	while(pos != 0){
		head = head -> next;
		pos--;
	}

	return head -> data;
}


Node* insertAtPos(Node* head, int pos, int data)
{
	Node* newNode = new Node(data);

	Node* temp = head;

	int count = 0;

	if(pos == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}

	
	

	while(temp != NULL && count < pos-1){
		temp = temp->next;
		count++;

	}
	if(temp != NULL){

		newNode->next = temp->next;
		temp->next = newNode;
		
		}	

	return head;
}


Node* deleteAtPos(Node* head, int pos){

	Node* temp = head;
	int count = 0;

	if(pos == 0){
		head = temp->next;
		delete temp;
		return head;

	}
	for (int i = 0; temp != NULL && i < pos-1 ; i++)
	{
		temp = temp->next;
	}

	if(temp == NULL || temp->next == NULL){
	return head;
}
	Node* next = temp->next->next;
	delete(temp->next);
	temp->next = next;
}


Node* insertRecursively(Node* head, int pos, int data)
{
	 Node* temp;

	if(pos == 0){
		Node* n = new Node(data);
		temp = head;
		head = n;
		n->next = temp;
		return head;
	}

	head->next = insertRecursively(head->next, pos-1, data);

	return head;

}


Node* deleteRecursively(Node* head, int pos)
{
	Node* temp;
	if(pos == 0){
		temp = head;
		head = temp->next;
		delete temp;
		return head;
	}

	head->next = deleteRecursively(head->next, pos-1);
	return head;
}



int findNode(Node *head, int n){
    // Write your code here.
    Node* temp = head;
    for(int i=0; i<1000 && temp!=NULL; i++){
        if(temp->data == n){
            return i;
        }
        temp = temp->next;
    }
    
        return -1;
    
}


Node* AppendLastNnodes(Node*head, int n) // n = number of nodes to be apppended to the begining of the singly linked list.
{
	Node* temp = head;
	Node* tail;


	int len = NoOfNodes(head);
	
	for (int i = 1; i < len-n ; i++)
	{
		temp = temp->next;		
	}

	// cout<<"\n"<<temp->data;

	tail = head;

	while(tail->next != NULL){

		tail = tail->next;

	}

	// cout<<"\n"<<tail->data;
	
	tail->next = head;
	
	head = temp->next;

	temp->next = NULL;



	return head;

}



Node* removeDuplicates(Node* head){

	Node* temp1 = head;
	Node* temp2 = head->next;

	while(temp2 != NULL){

		if(temp1->data == temp2->data){

			temp1->next = temp2->next;
			delete temp2;
			temp2 = temp1->next; 
		}
		else {
			temp1 = temp2;
			temp2 = temp2->next;
		}
	}

	return head;

}



void printReverseLL(Node* head){

	if(head == NULL){
		return;
	}

	printReverseLL(head->next);

	cout<<head->data<<"->";


}




Node* mergeSortedLL(Node* head1, Node* head2){

	 Node* head = NULL;
	Node* tail = NULL;



	if( head1->data <= head2->data ){

		head = head1;
		tail = head1;
		head1 = head1->next;

		}

	else{

		head = head2;
		tail = head2;
		head2 = head2->next;
	}
	
	

	while ( head1 != NULL && head2 != NULL ){

		if( head1->data <= head2->data ){

			tail->next = head1;
			tail = tail->next;
			head1 = head1->next;
		}

		else if ( head2->data < head1->data ){

			tail->next = head2;
			tail = tail->next;
			head2 = head2->next;
		}
	}

	while( head1 != NULL){

		tail->next = head1;
		tail = tail->next;
		head1 = head1->next;
	} 

	while( head2 != NULL ){

		tail->next = head2;
		tail = tail->next;
		head2 = head2->next;

	}



	return head;
}

Node* mergeSort(Node* head){

	if( head->next == NULL || head == NULL ){
		return head;
	}

	Node* mid = midNode(head);
	Node* mid1 = mid->next; 
	 
	mid->next = NULL;
	
	Node* h1 = mergeSort(head);
	Node* h2 = mergeSort(mid1);

	Node* finalhead = mergeSortedLL(h1,h2);

	return finalhead;

}





Node* reverseLLrecursive(Node* head){

	if( head == NULL || head->next == NULL){
		return head;
	}

	Node* reverseHead = reverseLLrecursive( head->next );

	Node* temp = reverseHead;

	while( temp->next != NULL ){

		temp = temp->next;
	}

	temp->next = head;
	head->next = NULL;

	return reverseHead;

}



Node* reverseLLiterative(Node* head){

	Node *prev = NULL;	Node *curr = head; 	Node *next = NULL;

	while( curr != NULL ){

		next = curr->next;
		
		curr->next = prev;
		
		prev = curr;
		curr = next;
		

	}

	return prev;
}



Node* reverseLLrecursive( Node* head ){

	if( head == NULL || head->next == NULL ){
		return head;
	}

	Node* reverseHead = reverseLLrecursive( head->next );

	Node* tail = head->next;
	tail->next = head;
	head->next = NULL;

	return reverseHead;

}



Node* practiceReverse( Node* head ){

	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;

	while( curr != NULL ){

		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	return prev;
}






Node* midNode(Node* head){

	Node* slow = head;
	Node* fast = head->next;

	while( fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;

	
}
*/

/*

bool isPalindrome( Node* head ){

	Node* mid = midNode(head);

	mid = practiceReverse(mid);

	while( mid->next != NULL ){
		if( head->data != mid->data ){
			return false;
		}
		head = head->next;
		mid = mid->next;
	}
	return true;
}

*/
/*

int findNode(Node *head, int n){
    // Write your code here.
    
    // Node* temp = head;
    // for(int i=0; i<1000 && temp!=NULL; i++){
    //     if(temp->data == n){
    //         return i;
    //     }
    //     temp = temp->next;
    // }
    
    //     return -1;
    
    
    
   int pos = 0;

    if(head == NULL){
        return -1;
    }

     

    if(head->data == n){
        return 0;
    }


   
   pos = findNode(head->next,n);

    if( pos == -1){
        return -1;
    }
    else{
    return pos+1;
    } 
}

*/

Node* evenAfterOdd( Node* head ){

	Node* temp = head;

	

}



int main(int argc, char const *argv[])
{
	// Node* head1 = takeInput();

	// Node* head2 = takeInput();

	

	// print(head1);
	// print(head2);

	Node* head = takeInput();

	print(head);

	// cout<<"\nNumber of Nodes = "<<NoOfNodes(head);

	// cout<<"\nData at position = "<<dataAtPos(0,head);

	// head = insertAtPos(head, 2, 99);

	// head = deleteAtPos(head, 1);

	// head = insertRecursively(head, 0, 99);

	// head = deleteRecursively(head, 0);

	// cout<<"\nData at index: "<<findNode(head, 0);

	// head = AppendLastNnodes(head, 1);

	// head = removeDuplicates(head);

	// cout<<endl;

	//printReverseLL(head); 

	// head = reverseLLrecursive(head);

	// cout<<"\n"<<midNode(head);

	// Node* mergeHead = mergeSortedLL(head1,head2);

	// head = mergeSort(head);

	// head = reverseLLiterative(head);

	// head = reverseLLrecursive(head);

	// head = practiceReverse(head);

	// cout<<endl<<isPalindrome(head);

	// cout<<"\nIndex of Node = "<<findNode(head,7);

	head = evenAfterOdd(head);
	
	print(head);

	return 0;
}
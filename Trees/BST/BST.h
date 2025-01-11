#include <iostream>
using namespace std;

template <typename T>

class BSTNode
{
public:

	T data;
	BSTNode *left, *right;

	BSTNode(T data){
		this->data = data;
		left = NULL;
		right = NULL;

	}

	~BSTNode(){
		delete left;
		delete right;
	}
	
};


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
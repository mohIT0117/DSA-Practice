#include <iostream>
using namespace std;

template <typename T>

class BinaryTreeNode
{
public:

	T data;
	BinaryTreeNode *left, *right;

	BinaryTreeNode(T data){
		this->data = data;
		left = NULL;
		right = NULL;

	}

	~BinaryTreeNode(){
		delete left;
		delete right;
	}
	
};
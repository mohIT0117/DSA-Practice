#include <iostream>
#include <queue>
#include <vector>
#include "BinaryTree.h"

using namespace std;

/*
BinaryTreeNode<int>* takeInput(){

	cout<<"\nEnter data : ";
	int data;
	cin>>data;

	if ( data == -1)
	{
		return NULL;
	}

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

	BinaryTreeNode<int> *node1 = takeInput();
	BinaryTreeNode<int> *node2 = takeInput();

	root->left = node1;
	root->right = node2;

	return root;

}


void printTree( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return;
	}
	
	cout<<"\n"<<root->data<<" : " ;
	if ( root->left != NULL )
	{
		cout<<"L"<<root->left->data<<",";
	}
	
	if ( root->right != NULL )
	{
		cout<<"R"<<root->right->data;
	}

	printTree( root->left );
	printTree( root->right );

}

*/


BinaryTreeNode<int>* takeInputLevelWise(){

	cout<<"\nEnter Root Data : ";
	int rootData;
	cin>>rootData;

	if ( rootData == -1)
	{
		return NULL;
	}

	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);

	while ( pendingNodes.size() != 0 ){

	BinaryTreeNode<int> *front = pendingNodes.front();
	pendingNodes.pop();

	int Data;
	cout<<"\nEnter left Data of "<<front->data;
	cin>>Data;
	if( Data != -1 ){
		BinaryTreeNode<int> *node = new BinaryTreeNode<int>(Data);
		pendingNodes.push( node );
		front->left = node;
	}

	cout<<"\nEnter right Data of "<<front->data;
	cin>>Data;
	if( Data != -1 ){
		BinaryTreeNode<int> *node = new BinaryTreeNode<int>(Data);
		pendingNodes.push( node );
		front->right = node;
	}
}

	return root;

}

void printTreeLevelWise( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return;
	}
	
		
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push( root );

	while( pendingNodes.size() != 0 ){

		BinaryTreeNode<int> *front = pendingNodes.front();
		pendingNodes.pop();

		cout<<"\n"<<front->data<<" : ";

		if( front->left != NULL ){
			cout<<"L"<<front->left->data<<",";
			pendingNodes.push( front->left );
		}
		if ( front->right != NULL ){
			cout<<"R"<<front->right->data;
			pendingNodes.push( front->right );
		}

		cout<<endl;
	

	}
}


/*
int numberOfNodes( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return 0;
	}

	int ans = 1;

	int smallAnsLeft = numberOfNodes( root->left );
	int smallAnsRight = numberOfNodes( root->right );

	ans = ans + smallAnsLeft + smallAnsRight;

	return ans; 
}


bool isNodePresent( BinaryTreeNode<int> *root, int x ){

	if ( root == NULL )
	{
		return false;
	}

    bool ans;

	if ( root->data == x )
	{
		ans = true;
	}

	bool ansL = isNodePresent( root->left, x );
	bool ansR = isNodePresent( root->right, x );

    if( ans || ansL || ansR ){
        return true;
    }

    else return false;

}


int heightOfBinaryTree( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return 0;
	}

	int h = 1;

	if ( root->left == NULL && root->right == NULL )
	{
		return h;
	}

	int lefth = heightOfBinaryTree ( root->left );
	int righth = heightOfBinaryTree ( root->right );

	if ( lefth > righth )
	{
		return lefth+h;
	}
	else return righth+h;
}



void preorderTraversal( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return;
	}

	cout<<root->data<<" ";
	preorderTraversal( root->left );
	
	preorderTraversal( root->right );
}

void inorderTraversal( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return;
	}

	
	inorderTraversal( root->left );
	cout<<root->data<<" ";
	inorderTraversal( root->right );
}

void postorderTraversal( BinaryTreeNode<int> *root ){

	if ( root == NULL )
	{
		return;
	}

	
	postorderTraversal( root->left );
	postorderTraversal( root->right );
	cout<<root->data<<" ";
}

*/


/*

BinaryTreeNode<int>* helperTreeFromPreInOrder( int in[], int inS, int inE, int pre[], int preS, int preE ){

	if ( preE < preS )
	{
		return NULL;
	}

	int rootData = pre[preS];
	int rootIndex = -1;

	for (int i = inS; i <= inE; i++)
	{
		if ( in[i] == rootData)
		{
			rootIndex = i;
			break;
		}
	}

	int linS = inS;
	int linE = rootIndex-1;
	int lpreS = preS + 1;
	int lpreE = linE-linS + lpreS;
	int rinS = rootIndex+1;
	int rinE = inE;
	int rpreS = lpreE+1;
	int rpreE = preE;

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>( rootData );
	root->left = helperTreeFromPreInOrder( in, linS, linE, pre, lpreS, lpreE );
	root->right = helperTreeFromPreInOrder( in, rinS, rinE, pre, rpreS, rpreE );

	return root;
}


BinaryTreeNode<int>* treeFromPreInOrderTraversal( int in[], int pre[], int size ){

	return helperTreeFromPreInOrder( in, 0, size-1, pre, 0, size-1 );
}
*/


/*
BinaryTreeNode<int>* helperTreeFromPostInOrder( int in[], int inS, int inE, int post[], int postS, int postE ){

	if ( postE < postS )
	{
		return NULL;
	}

	int rootData = post[postE];
	int rootIndex = -1;

	for (int i = inS; i <= inE; i++)
	{
		if ( in[i] == rootData)
		{
			rootIndex = i;
			break;
		}
	}

	int linS = inS;
	int linE = rootIndex-1;
	int lpostS = postS;
	int lpostE = linE-linS + lpostS;
	int rinS = rootIndex+1;
	int rinE = inE;
	int rpostS = lpostE+1;
	int rpostE = postE-1;

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>( rootData );
	root->left = helperTreeFromPostInOrder( in, linS, linE, post, lpostS, lpostE );
	root->right = helperTreeFromPostInOrder( in, rinS, rinE, post, rpostS, rpostE );

	return root;
}

BinaryTreeNode<int> * treeFromPostInOrderTraversal( int in[], int post[], int size){

	return helperTreeFromPostInOrder( in, 0, size-1, post, 0, size-1 );
}

*/

/*
pair<int, int> heightDiameterOfTree( BinaryTreeNode<int>* root ){

	if ( root == NULL )
	{
		pair<int, int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}

	pair<int, int> left = heightDiameterOfTree( root->left );
	pair<int, int> right = heightDiameterOfTree( root->right );

	int leftHeight = left.first;
	int leftDiameter = left.second;

	int righttHeight = right.first;
	int rightDiameter = right.second;

	pair<int, int> p;
	p.first = 1 + max( leftHeight, righttHeight );
	p.second = max( leftHeight+righttHeight, max( leftDiameter, rightDiameter ));

	return p;
}
*/

vector<int>* LevelWiseLinkedList( BinaryTreeNode<int>* root ){

	if ( root == NULL )
	{
		return {0};
	}
} 


int main(int argc, char const *argv[])
{
	// int in[] = {4,2,5,1,8,6,9,3,7};

	// int pre[] = {1,2,4,5,3,6,8,9,7};
	
	// int post[] = {4,5,2,8,9,6,7,3,1};

	BinaryTreeNode<int> *root = takeInputLevelWise();

	// cout<<"\n numberOfNodes = "<<numberOfNodes( root );

	// cout<<"\nisNodePresent :"<< isNodePresent( root, 9 );

	// cout<<"\nheightOfBinaryTree : "<<heightOfBinaryTree(root);

	// cout<<"\nPreorderTraversal : ";
	// preorderTraversal( root );
	
	// cout<<"\nInorderTraversal : ";
	// inorderTraversal( root );

	// cout<<"\nPostorderTraversal : ";
	// postorderTraversal( root );


	// BinaryTreeNode<int> *root = treeFromPreInOrderTraversal( in, pre, 9 );

	// BinaryTreeNode<int> *root = treeFromPostInOrderTraversal( in, post, 9 );
	
	// printTreeLevelWise( root );
	// cout<<endl;

	// pair<int, int> p = heightDiameterOfTree( root );
	
	// cout<<"\n heightDiameterOfTree : "<<p.first<<"\t"<<p.second;

	vector<int>* ar = LevelWiseLinkedList( root );

	for (int i = 0; i < ar.size(); i++)
	{
		while ( ar[i]->data != NULL ){
			cout<<ar[i]->data;
		}
	}
	cout<<

	return 0;
}

// 1 2 -1 -1 3 -1 -1
// 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 8 -1 -1 -1 
// 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 

/*
BinaryTreeNode<int> *root = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(20);
	BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(30);

	root->left = node1;
	root->right = node2;
*/

// 1 2 3 4 5 -1 -1 6 -1 -1 7 8 -1 -1 9 -1 -1 -1 -1